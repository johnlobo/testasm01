;;=============================================================================
;; GAME SYSTEM MANAGER
;;=============================================================================

.module game_manager

;; Include all CPCtelera constant definitions, macros and variables
.include "cpctelera.h.s"
.include "cpct_functions.h.s"
.include "cmp/entity.h.s"
.include "man/entity.h.s"
.include "man/patrol.h.s"
.include "sys/render.h.s"
.include "sys/input.h.s"
.include "sys/physics.h.s"
.include "assets/assets.h.s"

;;=============================================================================
;; Manager Configuration Constants
;;=============================================================================
ent1: DefineCmp_Entity 0, 0, 1, 1, 8 16, 1, _sp_pieces_0, 1
ent2: DefineCmp_Entity 20, 40, -1, 2, 8 16, 1, _sp_pieces_1, 1
ent3: DefineCmp_Entity 30, 70, 1, -2, 8 16, 1, _sp_pieces_2, 1
ent4: DefineCmp_Entity 40, 100, -1, -2, 8 16, 1, _sp_pieces_3, 1
ent5: DefineCmp_Entity 52, 130, 0, -2, 8 16, 1, _sp_pieces_2, 1
ent6: DefineCmp_Entity 54, 130, 1, -2, 8 16, 1, _sp_pieces_2, 1
ent7: DefineCmp_Entity 56, 130, 1, 2, 8 16, 1, _sp_pieces_1, 1
ent8: DefineCmp_Entity 58, 130, 1, -2, 8 16, 1, _sp_pieces_2, 1
ent9: DefineCmp_Entity 60, 130, 0, -2, 8 16, 1, _sp_pieces_1, 1

;;=============================================================================
;; man_game_init
;;=============================================================================

man_game_init::
    ;; Init Entity Manager
    call man_entity_init
    
    ;;Init Systems
    call sys_eren_init
    call man_entity_getArrayHL
    call sys_physics_init
    call man_entity_getArrayHL
    call sys_input_init
    
    ;; Init 5 test entitites
    ld hl, #ent1
    call man_entity_create
    ld hl, #ent2
    call man_entity_create
    ld hl, #ent3
    call man_entity_create
    ;ld hl, #ent4
    ;call man_entity_create
    ;;ld hl, #ent5
    ;;call man_entity_create
    ;;ld hl, #ent6
    ;;call man_entity_create
    ;;ld hl, #ent7
    ;;call man_entity_create
    ;;ld hl, #ent8
    ;;call man_entity_create
    ;;ld hl, #ent9
    ;;call man_entity_create

    ;; Init Patrol Manager (Requires entities to be created)
    call man_entity_getArrayHL
    call man_patrol_init

    ret

;;=============================================================================
;; man_game_update
;;=============================================================================

man_game_update::
    call sys_input_update
    call sys_physics_update
    
    ret
    
;;=============================================================================
;; man_game_render
;;=============================================================================

man_game_render::
    call sys_eren_pre_update
    call wait_for_int5
    call sys_eren_update
    call sys_eren_post_update
    ret