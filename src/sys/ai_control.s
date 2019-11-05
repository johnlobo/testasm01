;;
;;  ENTITY AI CONTROL SYSTEM
;;

.include "cmp/entity.h.s"
.include "man/entity.h.s"
.include "cpctelera.h.s"

.module sys_ai_control

;;=============================================================================
;; Physics system constants

;;=============================================================================
;; sys_ai_control_init
;;  Init de ai control system
;; INPUT:
;;  HL = Pointer to the entity array
;;
sys_ai_control_init::
    ld (ent_array_ptr_temp_standby), hl

    ld (ent_array_ptr), hl
    ret

;;=============================================================================
;; sys_ai_control_update
;;  Updates all ai entities
;; INPUT:
;; DESTROYS: AF, BC, DE, HL
;;
sys_ai_control_update::

_ent_array_ptr = . + 1
    ld hl, #0000
_loop:
    ;; Get pointer to next AI-Entity in DE
    ld e, (hl)
    inc hl
    ld d, (hl)
    inc hl
    
    ;; check for &AI being null pointer
    ld a, e
    or d
    ret z   ;; if de = nullpointr then ret
    
    ;; IX = DE (IX = &ai) 
    ld__ix_e
    ld__ix_d

    ;; Perform ai behaviour
    ld a, e_ai_st(ix)
    cp #e_ai_st_stand_by
    call z, sys_ai_stand_by
    cp #e_ai_st_move_to
    call z, sys_ai_move_to
    cp #e_ai_st_patrol
    call z, sys_ai_patrol

    jr _loop

;;=============================================================================
;;  BEHAVIOURS
;;

;;=============================================================================
;; sys_ai_control_stand_by
;;  An entity waiting for an event to accur
;; INPUT:
;; DESTROYS: AF, BC, DE, HL
;;
