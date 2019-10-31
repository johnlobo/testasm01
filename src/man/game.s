;;=============================================================================
;; GAME SYSTEM MANAGER
;;

.module game_manager

;; Include all CPCtelera constant definitions, macros and variables
.include "cpctelera.h.s"
.include "cmp/entity.h.s"
.include "man/entity.h.s"
.include "sys/render.h.s"
.include "sys/input.h.s"
.include "sys/physics.h.s"
.include "assets/assets.h.s"

;;==================================================================
;; Manager Configuration Constants
;;==================================================================
ent1: DefineCmp_Entity 0, 0, 0, 0, 8 16, 1, _sp_pieces_0, 1
ent2: DefineCmp_Entity 20, 100, -1, 2, 8 16, 1, _sp_pieces_1, 1
ent3: DefineCmp_Entity 60, 150, 2, 4, 8 16, 1, _sp_pieces_2, 1

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; man_game_init
;;
man_game_init::
    ;; Init Entity Manager
    call man_entity_init
    
    ;;Init Systems
    call sys_eren_init
    call sys_physics_init
    ;;call sys_input_init
    
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
    ;;call sys_physics_update
    
    ret
    
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; man_game_render
;;
man_game_render::
    call sys_eren_update
    
    ret