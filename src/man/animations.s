;;=============================================================================
;;  Animations  Manager
;;=============================================================================

.module animations_manager

.include "assets/assets.h.s"
.include "cmp/entity.h.s"

_player01_anim_01:
    .dw _sp_player01_00
    .dw _sp_player01_01
    .dw _sp_player01_02
    .dw nullptr
    .dw _player01_anim_01
