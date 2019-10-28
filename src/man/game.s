;;
;; GAME SYSTEM MANAGER
;;
;;

;; Include all CPCtelera constant definitions, macros and variables
.include "cpctelera.h.s"
.include "cmp/entity.h.s"

.module game_manager

;;==================================================================
;; Manager Configuration Constants
;;==================================================================


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; man_game_init
;;
man_game_init::
    ;; Init Entity Manager
    call man_entity_init
    
    ;;Init Systems
    call sys_eren_init
    call sys_physics_init
    call sys_input_init
    
    ;; Init 3 test entitites
    ld hl, #ent1
    call man_entity_create
    ld hl, #ent2
    call man_entity_create
    ld hl, #ent3
    call man_entity_create
    
    ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; man_game_update
;;
man_game_update::
    call sys_input_update
    call sys_physics_update
    
    ret
    
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; man_game_render
;;
man_game_render::
    call sys_eren_update
    
    ret