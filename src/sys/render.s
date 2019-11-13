;;=============================================================================
;; RENDER SYSTEM
;;

.module render_system

.include "cpctelera.h.s"
.include "cmp/entity.h.s"
.include "man/entity.h.s"
.include "cpct_functions.h.s"
.include "assets/assets.h.s"



;;=============================================================================
;;  Render System Constants
;;
screen_start = 0xc000       ;; video memory start


;;=============================================================================
;; sys_eren_init
;;  Inits render System
;; INPUT
;;  HL : Pointer to the start of the entity array
;;  DESTROYS: AF, BC, DE, HL
;;
sys_eren_init::
    ;; Set entity number and pointers
    ld (_entity_array_ptr_ix), hl

    ;; Set Mode 0
    ld c, #0
    call cpct_setVideoMode_asm

    ;; Set Palette
    ld hl, #_pal_main       ;; palette array
    ld de, #16
    call cpct_setPalette_asm

    ;; Set border
    cpctm_setBorder_asm HW_WHITE    ;; set border to gray
    
    ;;;; Draw background
    ld hl, #_bg_back01
    ld de, #0xc000
    ld bc, #0x4000
    ldir

    ;; Initializes the xor drawing funtion for the first use
    ld hl, #sys_eren_first_render_entities
    ld (_render_function_ptr), hl

    ret

;;=============================================================================
;; sys_eren_pre_update
;;  Updates the render system
;;  INPUT:
;;      IX: Pointer to the entity array
;;      A: Number of elements in the array
;;  DESTROYS: AF, HL, BC, DE, IX
;;
sys_eren_pre_update::

    ld ix, (_entity_array_ptr_ix)   ;; entity array pointer

_pre_update_loop:
    ld a, e_w(ix)               ;; a= Entity.width
    cp #e_w_invalidEntity       ;; if (entity.width == invalid)
    ret z                       ;; return

    ;; Calculate new video memory pointer
    ld de, #screen_start
    ld c, e_x(ix)
    ld b, e_y(ix)
    call cpct_getScreenPtr_asm

    ;; Store video memory pointer as current
    ld e_currVP_l(ix), l
    ld e_currVP_h(ix), h

    ;; Next Entity 
    ld bc, #sizeof_e
    add ix, bc
    jr _pre_update_loop

    ret

;;=============================================================================
;; sys_eren_post_update
;;  Updates the render system
;;  INPUT:
;;      IX: Pointer to the entity array
;;      A: Number of elements in the array
;;  DESTROYS: AF, HL, BC, DE, IX
;;
sys_eren_post_update::

    ld ix, (_entity_array_ptr_ix)   ;; entity array pointer

_post_update_loop:
    ld a, e_w(ix)               ;; a= Entity.width
    cp #e_w_invalidEntity       ;; if (entity.width == invalid)
    ret z                       ;; return

    ;; Store video current memory pointer as last
    ld l, e_currVP_l(ix) 
    ld e_lastVP_l(ix), l
    ld h, e_currVP_h(ix) 
    ld e_lastVP_h(ix), h

    ;; Next Entity 
    ld bc, #sizeof_e
    add ix, bc
    jr _post_update_loop

    ret

;;=============================================================================
;; sys_eren_update
;;  Updates the render system
;;  INPUT:
;;      IX: Pointer to the entity array
;;      A: Number of elements in the array
;;  DESTROYS: AF, HL, BC, DE, IX
;;
sys_eren_update::

    ;; render entities
_render_function_ptr = .+1              ;; pointer to change the address to call
    call sys_eren_first_render_entities ;; render all entities the first time

    ret
    
;;=============================================================================
;; sys_eren_render_entities
;;  Draw all entity components
;;  INPUT:
;;      IX: Pointer to the entity array
;;      A: Number of elements in the array
;;  DESTROYS: AF, HL, BC, DE, IX
;;
sys_eren_render_entities::
_entity_array_ptr_ix = . +2
    ld ix, #0x0000              ;; entity array pointer

    ;; sync with VSYNC
    ;;call cpct_waitVSYNC_asm

_update_loop:
    ld a, e_w(ix)               ;; a= Entity.width
    cp #e_w_invalidEntity       ;; if (entity.width == invalid)
    ret z                       ;; return

    ;; Check if entity has been moved
    ld a, e_moved(ix)
    or a
    jr z, _no_moved 

    cpctm_setBorder_asm HW_RED    ;; set border to gray

    ;; Erase previous Instance
    ld e, e_lastVP_l(ix)
    ld d, e_lastVP_h(ix)
    ld l, e_pspr_l(ix)
    ld h, e_pspr_h(ix)
    ld b, e_w(ix)
    ld c, e_h(ix)
    push hl
    push bc
    call cpct_drawSpriteBlended_asm
    
    ;; Draw entity sprite
    ld e, e_currVP_l(ix)
    ld d, e_currVP_h(ix)
    pop bc
    pop hl
    call cpct_drawSpriteBlended_asm

    cpctm_setBorder_asm HW_WHITE    ;; set border to gray

_moved:
    ld e_moved(ix), #0;

_no_moved:

    ld bc, #sizeof_e
    add ix, bc
    jr _update_loop
    
    ;;=============================================================================
;; sys_eren_first_render_entities
;;  Draw all entity components
;;  INPUT:
;;      IX: Pointer to the entity array
;;      A: Number of elements in the array
;;  DESTROYS: AF, HL, BC, DE, IX
;;
sys_eren_first_render_entities::
    ld ix, (_entity_array_ptr_ix)   ;; entity array pointer

_update_loop2:
    ld a, e_w(ix)               ;; a= Entity.width
    cp #e_w_invalidEntity       ;; if (entity.width == invalid)
    jr z, _change_to_no_first   ;; change call and return
       
    ;; Draw entity sprite
    ld e, e_currVP_l(ix)
    ld d, e_currVP_h(ix)
    ld l, e_pspr_l(ix)
    ld h, e_pspr_h(ix)
    ld b, e_w(ix)
    ld c, e_h(ix)
    call cpct_drawSpriteBlended_asm

    ld bc, #sizeof_e
    add ix, bc
    jr _update_loop2
    
    ;; change call to other render function
_change_to_no_first:
    ld hl, #sys_eren_render_entities
    ld (#_render_function_ptr), hl

    ret
    
