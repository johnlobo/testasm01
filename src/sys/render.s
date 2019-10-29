;;=============================================================================
;;
;;

.include "cpctelera.h.s"
.include "cmp/entity.h.s"
.include "cpct_functions.h.s"
.include "assets/assets.h.s"


.module sys_entity_render

;;=============================================================================
;;  Render System Constants
;;
screen_start = 0xc000       ;; video memory start


;;=============================================================================
;; sys_eren_init
;;  Inits render System
;;  DESTROYS: AF, BC, DE, HL
;;
sys_eren_init::
    ;; Set Mode 0
    ld c, #0
    call cpct_setVideoMode_asm
    ld hl, #_pal_main       ;; palette array
    ld de, #16
    call cpct_setPalette_asm
    cpctm_setBorder_asm HW_WHITE    ;; set border to gray
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
    call sys_eren_render_entities 

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
    ld (_ent_counter), a
_update_loop:
    ;; Erase previous instance
    ld e, e_lastVP_l(ix)
    ld d, e_lastVP_h(ix)
    xor a
    ld c, e_w(ix)
    ld b, e_h(ix)
    push bc
    call cpct_drawSolidBox_asm
    
    ;; Calculate new video memory pointer
    ld de, #screen_start
    ld c, e_x(ix)
    ld b, e_y(ix)
    call cpct_getScreenPtr_asm
    
    ;; Store video memory pointer as last
    ld e_lastVP_l(ix), l
    ld e_lastVP_h(ix), h
    
    ;; Draw entity sprite
    ex de, hl
    ld l, e_pspr_l(ix)
    ld h, e_pspr_h(ix)
    pop bc
    call cpct_drawSprite_asm
    
_ent_counter = .+1
    ld a, #0
    dec a 
    ret z
    
    ld (_ent_counter), a
    ld bc, #sizeof_e
    add ix, bc
    jr _update_loop
    
    
