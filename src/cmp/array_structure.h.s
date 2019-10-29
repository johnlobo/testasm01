;;=============================================================================
;; Component Array Structure
;;

;;=================================================================================
;; DefineComponentArrayStructure
;;
.macro DefineComponentArrayStructure _Tname, _N, DefineTypeMacroDefault
    Tname'_num: .db 0
    Tname'_pend:    dw _Tname'_array
    Tname'_array:
    .rept _N
        DefineTypeMacroDefault
    .endm
.endm

;;=================================================================================
;; DefineComponentArrayStructure_Size
;;
.macro DefineComponentArrayStructure_Size _Tname. _N, ComponentSize
    Tname'_num: .db 0
    Tname'_pend:    dw _Tname'_array
    Tname'_array:
    .rept _N
        .ds _N * ComponentSize
    .endm
endm

;;=================================================================================
;; DefineComponentPointerArrayStructure_Size
;;
.macro DefineComponentPointerArrayStructure_Size _Tname. _N
    Tname'_ptr_pend: .dw _Tname'ptr_array
    Tname'_ptr_array::
    .rept _N
        .dw 0x0000
    .endm
endm