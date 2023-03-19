#ifndef BN_SPRITE_ITEMS_ISLAND_LINEA1_H
#define BN_SPRITE_ITEMS_ISLAND_LINEA1_H

#include "bn_sprite_item.h"

//{{BLOCK(island_linea1_bn_gfx)

//======================================================================
//
//	island_linea1_bn_gfx, 64x128@4, 
//	+ palette 16 entries, not compressed
//	+ 128 tiles not compressed
//	Total size: 32 + 4096 = 4128
//
//	Time-stamp: 2023-03-18, 16:30:59
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_ISLAND_LINEA1_BN_GFX_H
#define GRIT_ISLAND_LINEA1_BN_GFX_H

#define island_linea1_bn_gfxTilesLen 4096
extern const bn::tile island_linea1_bn_gfxTiles[128];

#define island_linea1_bn_gfxPalLen 32
extern const bn::color island_linea1_bn_gfxPal[16];

#endif // GRIT_ISLAND_LINEA1_BN_GFX_H

//}}BLOCK(island_linea1_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item island_linea1(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(island_linea1_bn_gfxTiles, 128), bpp_mode::BPP_4, compression_type::NONE, 2), 
            sprite_palette_item(span<const color>(island_linea1_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

