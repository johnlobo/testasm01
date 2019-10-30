;;=============================================================================
;; INPUT SYSTEM
;;

.module input_system

.include "cpctelera.h.s"
.include "man/entity.h.s"
.include "cmp/entity.h.s"
.include "cpct_functions.h.s"
.include "sys/input.h.s"

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

    ;; Check O key
    ld hl, #Key_O
    call cpct_isKeyPressed_asm
    jr z, O_NotPressed
O_Pressed:
    ld e_vx(ix), #-1
O_NotPressed:

    ;; Check P key
    ld hl, #Key_P
    call cpct_isKeyPressed_asm
    jr z, P_NotPressed
P_Pressed:
    ld e_vx(ix), #1
P_NotPressed:

    ;; Check Q key
    ld hl, #Key_Q
    call cpct_isKeyPressed_asm
    jr z, Q_NotPressed
Q_Pressed:
    ld e_vy(ix), #-2
Q_NotPressed:
    
   ;; Check A key
    ld hl, #Key_A
    call cpct_isKeyPressed_asm
    jr z, A_NotPressed
A_Pressed:
    ld e_vy(ix), #2
A_NotPressed:    

    ret
