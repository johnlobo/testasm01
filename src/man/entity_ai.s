;;=============================================================================
;;  Entity AI Manager
;;=============================================================================

.module entity_ai_manager

;; Include all CPCtelera constant definitions, macros and variables
.include "cmp/array_structure.h.s"
.include "man/entity.h.s"
.include "cpctelera.h.s"

;;=================================================================
;; Manager Memeber Variables
;;=================================================================

;;-----------------------------------------------------------------
;; Entity Components
DefinePointerArrayStructure _ai, max_entities

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; FUNC: man_entity_ai_init
;;  Sets initial pointers to begginig of th array and sets everything to zero
;; INPUT:
;; DESTROYS:
;;    AF, HL, DE, BC
;; RETURN:
;;  HL: pointer to the first element of the array
;;
man_entity_ai_init::
    ld hl, (#_ai_ptr_array)     ;; Points to the beggining of the pointer array
    ld (#_ai_ptr_pend), hl      ;; Point hl the last point of the array
    ;; initializes pointer array with zeroes
    xor a                       ;; a = 0
    ld (hl), a                  ;; set initial byte = 0
    ld e, h                     ;; copy hl to de
    ld d, l                     ;;
    inc de                      ;; inc de    
    ld bc, #2*max_entities-1    ;; set size to zero
    ldir                        ;; copy zeroes 
;;
;; This function return in the next one
;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; FUNC: man_entity_ai_HL
;;    
;; INPUT:
;; DESTROYS:
;; RETURN:
;;  HL: pointer to the begining of the ai pointer array
;;
man_entity_ai_HL::
    ld hl, #_ai_ptr_array
    ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; FUNC: man_entity_ai_add
;;  Adds a new element to the ai pointer array
;; INPUT:
;;  IX: pointer to the new entity to add to the array
;; DESTROYS:
;;  AF, HL
;; RETURN:
;;  HL: Pointer to the end of the ai pointer array
;;
man_entity_ai_add::
    ld hl, (_ai_ptr_pend)   ;; store ix address in las position of the array
    ld__a_ixl               ;;
    ld (hl), a              ;;    
    inc hl                  ;; advance hl
    ld__a_ixh               ;;
    ld (hl), a              ;;

    inc hl                  ;; store last address of the pointer array in 
    ld (_ai_ptr_pend), hl   ;; _ai_ptr_pend

    ret