;;=============================================================================
;; PHYSICS SYSTEM
;;

.module physics_system

.include "cpctelera.h.s"
.include "cmp/entity.h.s"
.include "sys/render.h.s"
.include "sys/physics.h.s"
.include "man/entity.h.s"

;;sys_physics_init::
;;    ret

sys_physics_init::
    ;; Set entity number and pointers
    ld (_entity_array_ptr_ix), hl
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
    _entity_array_ptr_ix = . +2
    ld ix, #0x0000              ;; entity array pointer

_update_loop:
    ld a, e_w(ix)               ;; a= Entity.width
    cp #e_w_invalidEntity       ;; if (entity.width == invalid) then ret
    ret z

    ;; Check if velocity x and velocity y are zero
    ld a, e_vx(ix)
    ld c, e_vy(ix)
    or c
    jr z, _no_moved

    
    ;; UPDATE X
    ld a, #screen_width + 1
    sub e_w(ix)
    ld c, a

    ld a, e_x(ix)       ;; a = entity.x
    add e_vx(ix)        ;; a = x + vx
    cp c                ;; 
    jr nc, invalid_x    ;; 
valid_x:
    ld e_x(ix), a       ;; store new x value in entity
    jr endif_x
invalid_x:
    ld a, e_vx(ix)
    neg
    ld e_vx(ix), a
endif_x:

    ;; UPDATE Y
    ld a, #screen_height + 1
    sub e_h(ix)
    ld c, a

    ld a, e_y(ix)       ;; a = entity.x
    add e_vy(ix)        ;; a = x + vx
    cp c                ;; 
    jr nc, invalid_y    ;; 
valid_y:
    ld e_y(ix), a       ;; store new x value in entity
    jr endif_y
invalid_y:
    ld a, e_vy(ix)
    neg
    ld e_vy(ix), a
endif_y:

_moved:
    ld e_moved(ix), #1 
_no_moved:
    ld de, #sizeof_e    ;; offset
    add ix, de
    jr _update_loop     ;; back to loop start


