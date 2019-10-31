;;=============================================================================
;; PHYSICS SYSTEM
;;

.module physics_system

.include "cpctelera.h.s"
.include "cmp/entity.h.s"

sys_physics_init::
    ret

;;=============================================================================
;; sys_physics_update
;;  Updates all the physics entities
;;  INPUT
;;      IX = Pointer to entity 0
;;      A = Number of entities
;;  DETROYS AF, BC, DE,HL, IX
;;
sys_physics_update::
    ld b, a     ;; loads number of entities into b
    ;; x coordinate update
    ld a, e_x(ix)
    add e_vx(ix)
    ;; y coordinate update
    ld a, e_y(ix)
    add e_vy(ix)
    
    ret
