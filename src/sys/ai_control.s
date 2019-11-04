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
;;  INPUT
;;  HL = Pointer to the entity array
;;

sys_ai_control_init::
    ld (ent_array_ptr_temp_standby), hl

    ld (ent_array_ptr), hl
    ret