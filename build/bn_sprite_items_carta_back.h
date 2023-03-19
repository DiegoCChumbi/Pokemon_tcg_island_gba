#ifndef BN_SPRITE_ITEMS_CARTA_BACK_H
#define BN_SPRITE_ITEMS_CARTA_BACK_H

#include "bn_sprite_item.h"

//{{BLOCK(carta_back_bn_gfx)

//======================================================================
//
//	carta_back_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2023-03-18, 19:39:49
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CARTA_BACK_BN_GFX_H
#define GRIT_CARTA_BACK_BN_GFX_H

#define carta_back_bn_gfxTilesLen 2048
extern const bn::tile carta_back_bn_gfxTiles[64];

#define carta_back_bn_gfxPalLen 32
extern const bn::color carta_back_bn_gfxPal[16];

#endif // GRIT_CARTA_BACK_BN_GFX_H

//}}BLOCK(carta_back_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item carta_back(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(carta_back_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(carta_back_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

