;;-----------------------------LICENSE NOTICE------------------------------------
;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
;;  Copyright (C) 2018 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
;;
;;  This program is free software: you can redistribute it and/or modify
;;  it under the terms of the GNU Lesser General Public License as published by
;;  the Free Software Foundation, either version 3 of the License, or
;;  (at your option) any later version.
;;
;;  This program is distributed in the hope that it will be useful,
;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;  GNU Lesser General Public License for more details.
;;
;;  You should have received a copy of the GNU Lesser General Public License
;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
;;-------------------------------------------------------------------------------

.module main

;; Include all CPCtelera constant definitions, macros and variables
.include "cpctelera.h.s"
.include "cpct_functions.h.s"
.include "man/game.h.s"

;;
;; Start of _DATA area 
;;  SDCC requires at least _DATA and _CODE areas to be declared, but you may use
;;  any one of them for any purpose. Usually, compiler puts _DATA area contents
;;  right after _CODE area contents.
;;
.area _DATA

;;
;; Start of _CODE area
;; 
.area _CODE

.globl wait_for_int5

;;=============================================================================
;; _interrupt_handler:
;; INPUT
;;    HL: address of the new interrupt table
;;
;;=============================================================================
int_counter: .db 06
_interrupt_handler:
   di
   push af
   push bc
   push de
   push hl
   ;; Decrement int_counter
   ld a, (int_counter)
   dec a
   ;; if int_counter != 0 goto _cont
   jr nz, _cont
_zero:
   ld a, #06;; reset int_counter
_cont:
   ld (int_counter), a  ;; store int_counter

   pop hl
   pop de
   pop bc
   pop af
   ei
   reti

;;=============================================================================
;; set_interrupt_handler:
;; INPUT
;;    HL: address of the new interrupt table
;;
;;=============================================================================
_set_interrupt_handler:
   ;; sync raster with 0 interruption
   call cpct_waitVSYNC_asm
   halt
   halt
   call cpct_waitVSYNC_asm
   ;; change interrupt jump to the new interrupt handler
   ld hl, #0x38
   ld (hl), #0xc3
   inc hl
   ld (hl), #<_interrupt_handler
   inc hl
   ld (hl), #>_interrupt_handler
   inc hl
   ld (hl), #0xc9
   ret

;;=============================================================================
;; wait_for_int5:
;; waits until raster reach interrupt 5
;;    
;;
;;=============================================================================
wait_for_int5::
_loop_int5:
   ld a, (int_counter)
   cp #06
   jr nz, _loop_int5
   ret

;;
;; MAIN function. This is the entry point of the application.
;;    _main:: global symbol is required for correctly compiling and linking
;;
_main::
   ;; Disable firmware to prevent it from interfering with string drawing
   ;;call cpct_disableFirmware_asm
   call _set_interrupt_handler
   
   call man_game_init

   ;; Loop forever
loop:

   call man_game_update
   call man_game_render
    
   jr    loop