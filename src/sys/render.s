;;=============================================================================
;; sys_eren_init
;;
sys_eren_init::
    ;; Set entity number and pointer
    ld (_entity_array_ptr_ix), hl
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
;;
sys_eren_update::
    ;; render entities
    call sys_eren_render_entities 

    ret
