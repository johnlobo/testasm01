;;=============================================================================
;;  Patrol Manager
;;

.include "cpctelera.h.s"
.include "man/patrol.h.s"
.include "man/entity.h.s"
.include "cmp/entity.h.s"

;;
;;  Patrol 01 Manually defined
;;
DefPatrol   _patrol_01
DefPoint    6, 6
DefPoint    60, 40
DefPoint    30, 120
DefPoint    2, 50
EndPatrol   _patrol_01

;;
;;  Patrol 02 Manually defined
;;
DefPatrol   _patrol_02
DefPoint    40, 10
DefPoint    30, 130
DefPoint    70, 150
DefPoint    60, 90
DefPoint    10, 30
EndPatrol   _patrol_02

;;
;; A = Patrol Select 0, 1, 2...]
;;
man_patrol_get::
    or a
    jr nz, _p2
_p1:
    ld hl, #_patrol_01
    ret
_p2:
    ld hl, #_patrol_02
    ret

;;
;; IX = Entity Array
;; Sets patrol for all entities
;;
man_patrol_init::
    call man_entity_getArrayHL
    ;; First patrol will be Patro-ID 0
    ld b, #0        ;; B = Patrol ID

_loop:
    ;; Exit on invalid entity
    ld a, e_w(ix)
    cp #e_w_invalidEntity
    ret z

    ;; Check if it has AI
    ld a, e_ai_st(ix)
    cp #e_ai_st_noAI
    jr z, _no_AI_ent

    ;; Entity has AI, set Patrol
    ld a,b
    call man_patrol_get
    ld e_ai_patrol_step_l(ix), l
    ld e_ai_patrol_step_h(ix), h
    inc b

_no_AI_ent:
    ;; Jump to next entity
    ld de, #sizeof_e
    add ix, de

    jr _loop




