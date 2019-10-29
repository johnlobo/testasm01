;;=============================================================================
;; INPUT SYSTEM
;;

.include "cpctelera.h.s"
.include "man/entity.h.s"
.include "cmp/entity.h.s"
.include "cpct_functions.h.s"

.module sys_entity_input

;;=============================================================================
;; sys_input_init
;;  Initializes input system
;;
sys_input_init::
    ret
    
;;=============================================================================
;; sys_input_update
;;  Gets keyboard input and applies it to keyboard contolled entities
;;  INPUT
;;      IX = Pointer to entity 0
;;  DETROYS AF, BC, DE,HL, IX
;;
sys_input_update::
    ;; Reset velocities
    ld e_vx(ix), #0
    ld e_vy(ix), #0
    ;; Scan keyboard
    call cpct_scanKeyboard_f_asm
    
    ret
