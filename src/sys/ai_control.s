;;
;;  ENTITY AI CONTROL SYSTEM
;;

.include "cpctelera.h.s"
.include "cmp/entity.h.s"
.include "man/entity.h.s"
.include "man/patrol.h.s"

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
    ld (_ent_array_ptr_temp_standby), hl

    ld (_ent_array_ptr), hl
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
    ld__ixl_e
    ld__ixh_d

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
;;=============================================================================

;;=============================================================================
;; sys_ai_control_stand_by
;;  An entity waiting for an event to accur
;; INPUT:
;; DESTROYS: AF, BC, DE, HL
;;
sys_ai_stand_by::
_ent_array_ptr_temp_standby = . + 1
    ld hl, #0000

    ld e_ai_pre_st(ix), #e_ai_st_stand_by
    ld e_ai_st(ix), #e_ai_st_patrol

    ret

;;=============================================================================
;; sys_ai_control_move_to
;;  The entity changes its velocity to move to a x,y location
;; INPUT:
;;  IX = Pointer to Entity
;; DESTROYS: AF, IY
;;
sys_ai_move_to::
    ld e_vy(ix), #0
    ;; if obj.x > x ...
    ;; if obj.x - x > 0

    ;; UPDATE X
    ld a, e_ai_aim_x(ix)        ;a=obj.x
    sub e_x(ix)                 ;
    jr nc, _objx_greater_or_equal
_objx_lesser:
    ld e_vx(ix), #-1
    jr _endif_x
_objx_greater_or_equal:
    jr z, _arrived_x
    ld e_vx(ix), #1
    jr _endif_x
_arrived_x:
    ld e_vx(ix), #0
_endif_x:

    ;; UPDATE Y
    ld a, e_ai_aim_y(ix)        ;a=obj.y
    sub e_y(ix)                 ;
    jr nc, _objy_greater_or_equal
_objy_lesser:
    ld e_vy(ix), #-2
    jr _endif_y
_objy_greater_or_equal:
    jr z, _arrived_y
    ld e_vy(ix), #2
    jr _endif_y
_arrived_y:
    ld e_vy(ix), #0
    ld a, e_vx(ix)
    or a
    jr nz, _endif_y
    ;; X and Y are both 0
    ld a, e_ai_pre_st(ix)
    ld e_ai_st(ix), a
    ld e_ai_pre_st(ix), #e_ai_st_move_to
_endif_y:
    ret

;;=============================================================================
;; sys_ai_control_patrol
;;  
;; INPUT:
;;  IX = Pointer to Entity
;; DESTROYS: AF, IY
;;
sys_ai_patrol::
    ;; HL points to the next (X,Y) AI patrol step
    ld l, e_ai_patrol_step_l(ix)
    ld h, e_ai_patrol_step_h(ix)

    ;; COMPROBAR X != -1
    ld a, (hl)  ;; A = x
    cp #patrol_invalid_move_x
    jr z, _reset_patrol

    ;; Set AI-AIM (X,Y)
    ld e_ai_aim_x(ix), a
    inc hl                  ;; Point to y
    ld a, (hl)              ;; A = x
    ld e_ai_aim_y(ix), a

    ;; SET e_ai_patrol_step + 2
    inc hl
    ld e_ai_patrol_step_l(ix), l
    ld e_ai_patrol_step_h(ix), h

    ;; CHANGE TO move to
    ld e_ai_pre_st(ix), #e_ai_st_patrol
    ld e_ai_st(ix), #e_ai_st_move_to

    ret

_reset_patrol:
    ;; GET Next 2 bytes pointed by HL, which point to patrol start
    inc hl
    ld a, (hl)
    inc hl
    ld h, (hl)
    ;; Reset Patrol step 
    ld e_ai_patrol_step_l(ix), a
    ld e_ai_patrol_step_h(ix), h

    ret
