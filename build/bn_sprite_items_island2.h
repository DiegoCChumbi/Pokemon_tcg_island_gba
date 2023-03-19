#ifndef BN_SPRITE_ITEMS_ISLAND2_H
#define BN_SPRITE_ITEMS_ISLAND2_H

#include "bn_sprite_item.h"

//{{BLOCK(island2_bn_gfx)

//======================================================================
//
//	island2_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2023-03-18, 15:55:44
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_ISLAND2_BN_GFX_H
#define GRIT_ISLAND2_BN_GFX_H

#define island2_bn_gfxTilesLen 2048
extern const bn::tile island2_bn_gfxTiles[64];

#define island2_bn_gfxPalLen 32
extern const bn::color island2_bn_gfxPal[16];

#endif // GRIT_ISLAND2_BN_GFX_H

//}}BLOCK(island2_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item island2(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(island2_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(island2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

