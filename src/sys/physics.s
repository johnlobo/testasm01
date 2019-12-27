;;=============================================================================
;; INPUT SYSTEM
;;

.module physics_system

.include "cpctelera.h.s"
.include "man/entity.h.s"
.include "cmp/entity.h.s"

;;=============================================================================
;; Physcis system constants
;;
screen_width = 80
screen_height = 200

sys_physics_init::
    ret
    
;;=============================================================================
;; sys_physics_update
;;  Updates all physics components
;;  INPUT
;;      IX = Pointer to entity 0
;;  DETROYS AF, BC, DE,HL, IX
;;    
sys_physics_update::
