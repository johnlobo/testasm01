;;=============================================================================
;;  Animation System
;;
;;=============================================================================

.module animation_system

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; SYS_ANIMATION::INIT
;;  INPUT: -
;;  DESTROYS: AF, BC, DE, HL , IX
;;
sys_animation_init::
    ;; Get a pointer to the AI Entity Array_Ptr
    ld a, #e_cmp_ID_ANnimation
    call man_components_getArrayHL
    ld (_ent_array_ptr), hl
	ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; SYS_ANIMATION::UPDATE
;;  INPUT: -
;;  DESTROYS: AF, BC, DE, HL , IX
;;
sys_animation_update::
    
_ent_array_ptr = . +1
    ld hl, #0x000


	ret