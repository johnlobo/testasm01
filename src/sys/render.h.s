;;=============================================================================
;;
;;

.globl sys_eren_init
.globl sys_eren_pre_update
.globl sys_eren_update
.globl sys_eren_post_update

;;=============================================================================
;; RENDER CONSTANTS
;;
screen_width = 80
screen_height = 200
;; The size of a tile is 8x8-bytes
TILESIZE_X  =  4
TILESIZE_Y  =  8
;; The size of the map
MAP_W = 20
MAP_H = 25
;;Upper-left tile will be at (1,2) coordinate in tiles. Convert to byte coordinates.
VIEWPORT_X  =  (1*TILESIZE_X)
VIEWPORT_Y  =  (2*TILESIZE_Y)

;;Convert byte coordinates to video memory address (all values constant, use macro)
;;TILEMAP_VMEM  = cpctm_screenPtr_asm CPCT_VMEM_START_ASM, VIEWPORT_X, VIEWPORT_Y