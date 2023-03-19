#ifndef BN_REGULAR_BG_ITEMS_FONDO_DE_JUEGO_H
#define BN_REGULAR_BG_ITEMS_FONDO_DE_JUEGO_H

#include "bn_regular_bg_item.h"

//{{BLOCK(fondo_de_juego_bn_gfx)

//======================================================================
//
//	fondo_de_juego_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 84 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 2688 + 2048 = 4768
//
//	Time-stamp: 2023-03-18, 16:59:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FONDO_DE_JUEGO_BN_GFX_H
#define GRIT_FONDO_DE_JUEGO_BN_GFX_H

#define fondo_de_juego_bn_gfxTilesLen 2688
extern const bn::tile fondo_de_juego_bn_gfxTiles[84];

#define fondo_de_juego_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell fondo_de_juego_bn_gfxMap[1024];

#define fondo_de_juego_bn_gfxPalLen 32
extern const bn::color fondo_de_juego_bn_gfxPal[16];

#endif // GRIT_FONDO_DE_JUEGO_BN_GFX_H

//}}BLOCK(fondo_de_juego_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item fondo_de_juego(
            regular_bg_tiles_item(span<const tile>(fondo_de_juego_bn_gfxTiles, 84), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(fondo_de_juego_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(fondo_de_juego_bn_gfxMap[0], size(32, 32), compression_type::NONE));
}

#endif

