;;=============================================================================
;;  PATROL MANAGER
;;

;;
;; Macro DefPatrol
;;
.macro DefPatrol _name
    _name:
.endm

;;
;; Macro DefPoint
;;
.macro DefPoint _x, _y
    .db _x, _y
.endm

;;
;; Macro EndPatrol
;;
.macro EndPatrol _name
    .dw _name
.endm
