;;=============================================================================
;; Component Array Structure
;;

;;=================================================================================
;; DefineComponentArrayStructure
;;
.macro DefineComponentArrayStructure _Tname, _N, _DefineTypeMacroDefault
    _Tname'_num::    .db 0
    _Tname'_pend::   .dw _Tname'_array
    _Tname'_array::
    .rept _N
        _DefineTypeMacroDefault
    .endm
.endm

;;=================================================================================
;; DefineComponentArrayStructure_Size
;;
.macro DefineComponentArrayStructure_Size _Tname. _N, _ComponentSize
    _Tname'_num:    .db 0
    _Tname'_pend:   .dw _Tname'_array
    _Tname'_array:
        .ds _N * _ComponentSize
.endm

;;=================================================================================
;; DefineComponentPointerArrayStructure_Size
;;
;;.macro DefineComponentPointerArrayStructure_Size _Tname. _N
;;    _Tname'_ptr_pend: .dw _Tname'_ptr_array
;;    _Tname'_ptr_array::
;;    .rept _N
;;        .dw 0x0000
;;    .endm
;;endm