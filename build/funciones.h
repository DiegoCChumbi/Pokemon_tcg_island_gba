#include "bn_core.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_items_pantalla_inicio.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_items_island_linea1.h"
#include "bn_sprite_items_island_linea2.h"
#include "bn_sprite_items_ninja.h"
#include "bn_sprite_animate_actions.h"
#include "bn_keypad.h"
#include "bn_log.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_regular_bg_items_fondo_de_juego.h"
#include "bn_string.h"
#include "bn_vector.h"
#include "carta.h"
#include "carta_jugada.h"
#include "carta_atachada.h"
#include "bn_random.h"
#include "bn_sprite_items_carta_back.h"


void pantalla_inicio();
void batalla(bn::vector<carta,60>,bn::vector<carta,60>,int);
void barajar(bn::vector<carta,60>&,int);
void robar_carta(bn::vector<carta,60>&, bn::vector<carta,60>&,int,bn::sprite_ptr&);