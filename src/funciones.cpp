#include "funciones.h"

void pantalla_inicio(){
    
    bn::regular_bg_ptr fondo = bn::regular_bg_items::pantalla_inicio.create_bg(0,0);

    bn::sprite_ptr island_linea1 = bn::sprite_items::island_linea1.create_sprite(-27, 3);
    bn::sprite_animate_action<2> action1 = bn::create_sprite_animate_action_forever(
        island_linea1, 18, bn::sprite_items::island_linea1.tiles_item(), 0, 1);

    bn::sprite_ptr island_linea2 = bn::sprite_items::island_linea1.create_sprite(37, 3);
    bn::sprite_animate_action<2> action2 = bn::create_sprite_animate_action_forever(
        island_linea2, 18, bn::sprite_items::island_linea2.tiles_item(), 0, 1);
    
    bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
    bn::vector <bn::sprite_ptr,14> etiqueta_texto;
    text_generator.generate(-35,70,"Presiona start",etiqueta_texto);

    while(!bn::keypad::start_pressed()){
        action1.update();
        action2.update();
        bn::core::update();
    }

}

void batalla(bn::vector<carta,60> deck,bn::vector<carta,60> deck_oponente,int veces_ramdom_usado){

    bn::regular_bg_ptr fondo = bn::regular_bg_items::fondo_de_juego.create_bg(0,0);
    bool finalizado = false;

    //defino las manos
    bn::vector<carta,60> mano_jugador;
    bn::vector<bn::sprite_ptr,60> mano_jugador_imagenes;
    bn::vector<carta,60> mano_oponente;
    bn::vector<bn::sprite_ptr,60> mano_oponentew_imagenes;

    //defino los premios
    bn::vector<carta,6> premio_jugador;
    bn::vector<carta,6> premio_oponente;

    //Defino las pilas de descarte
    bn::vector<carta,60> descarte_jugador;
    bn::vector<carta,60> descarte_oponente;

    //defino las posiciones del jugador
    struct carta_jugada carta1;
    struct carta_jugada carta2;
    struct carta_jugada carta3;
    struct carta_jugada carta4;
    struct carta_jugada carta5;
    struct carta_jugada carta6;

    bn::vector<carta_atachada,60> atacado;

    //defino las posiciones del jugador
    struct carta_jugada carta_oponente1;
    struct carta_jugada carta_oponente2;
    struct carta_jugada carta_oponente3;
    struct carta_jugada carta_oponente4;
    struct carta_jugada carta_oponente5;
    struct carta_jugada carta_oponente6;

    bn::vector<carta_atachada,60> atacado_oponente;

    bn::sprite_ptr jugador_inferior = bn::sprite_items::carta_back.create_sprite(96,12);
    bn::sprite_ptr jugador_superior = bn::sprite_items::carta_back.create_sprite(96,12);

    bn::sprite_ptr oponente_inferior = bn::sprite_items::carta_back.create_sprite(96,-19);
    bn::sprite_ptr oponente_superior = bn::sprite_items::carta_back.create_sprite(96,-19);

    bn::sprite_ptr premios_jugador = bn::sprite_items::carta_back.create_sprite(-46,12);
    bn::sprite_ptr premios_oponente = bn::sprite_items::carta_back.create_sprite(-46,-19);

    while(!finalizado){
        bn::core::update();
    }

}

void barajar(bn::vector<carta,60>& deck,int veces_ramdom_usado){       //tambien se puede usar para barajar la mano

    bn::random random;

    for(int n=0;n<veces_ramdom_usado;n++){
        random.update();
    }
    veces_ramdom_usado++;

    for(int k=0;k<100;k++){
        for (int i = deck.size() - 1; i >= 0; i--) {
            int j = random.get_int() % (i + 1); // Generar un índice aleatorio previo a i
            if(j<60 and j>0){
                if (i != j) { // Si i y j son distintos, intercambiar los elementos
                    bn::swap(deck[i],deck[j]);
                }
            }
        }
    }

    bn::swap(deck[0],deck[7]);

}

void robar_carta(bn::vector<carta,60>& deck, bn::vector<carta,60>& mano,int cant_cartas,bn::sprite_ptr& carta){
    
    bn::fixed x_inicial = carta.x();
    bn::fixed y_inicial = carta.y();

    for(int n=0;n<cant_cartas;n++){
        if(deck.size()==0) break;
        mano.push_back(deck[deck.size()-1]);
        deck.pop_back();
        for(int j=0;j<30;j++){
            carta.set_x(carta.x()+2);
            bn::core::update();
        }
        carta.set_position(x_inicial,y_inicial);
    }

}

void roba_premios(bn::vector<carta,60>& deck,bn::vector<carta,6>& premios){
    
    for(int n=0;n<6;n++){
        premios.push_back(deck[deck.size()-1]);
        deck.pop_back();
    }

}

void dibuja_mano_jugador(){
    
}