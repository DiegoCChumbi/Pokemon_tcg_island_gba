#include "bn_core.h"
#include "carta.h"
#include "carta_jugada.h"
#include "funciones.h"

int main()
{
    bn::core::init();

    int veces_ramdom_usado = 0;

    bn::vector<carta,60> deck;

    //defino pokemon
    carta mewv("Mew V",1);
    carta mewvmax("Mew VMAX",2);
    carta genesectv("Genesect V",2);
    carta oricorio("Oricorio",1);

    //defino objetos
    carta botas_de_expedicion("Botas de expedicion",4);
    carta pase_combate("Pase de VIP de combate",4);
    carta ultra_ball("Ultra ball",4);
    carta cramobot("Cramobot",4);
    carta bloc_amigos("Bloc amigos",4);
    carta cambio("Cambio",4);
    carta cuerda_huida("Cuerda huida",4);
    carta cuerno_resonante("Cuerno resonante",4);
    carta cinturon_eleccion("Cinturon eleccion",4);
    carta pluma_ball("Pluma ball",4);
    carta caramelo_energetico("Caramelo energetico",4);
    carta aspiradora_perdida("Aspiradora perdida",4);
    
    //defino partidarios
    carta ordenes_jefe("Ordenes de jefe",5);
    carta selena("Selena",5);
    carta juez("Juez",5);
    carta serena("Serena",5);
    carta petra("Petra",5);

    //defino estadios
    carta senda_blanquecima("Senda blanquecima",6);
    carta ciudad_perdida("Ciudad perdida",6);
    
    //defino energias
    carta doble_energia_turbo("Doble energia turbo",7);

    deck.push_back(mewv);
    deck.push_back(cuerda_huida);
    deck.push_back(serena);
    deck.push_back(ultra_ball);
    deck.push_back(ordenes_jefe);
    deck.push_back(petra);
    deck.push_back(botas_de_expedicion);
    deck.push_back(cuerda_huida);
    deck.push_back(pluma_ball);
    deck.push_back(cramobot);
    deck.push_back(ultra_ball);
    deck.push_back(mewv);
    deck.push_back(botas_de_expedicion);
    deck.push_back(cramobot);
    deck.push_back(pase_combate);
    deck.push_back(ciudad_perdida);
    deck.push_back(cambio);
    deck.push_back(doble_energia_turbo);
    deck.push_back(ciudad_perdida);
    deck.push_back(aspiradora_perdida);
    deck.push_back(juez);
    deck.push_back(caramelo_energetico);
    deck.push_back(doble_energia_turbo);
    deck.push_back(genesectv);
    deck.push_back(caramelo_energetico);
    deck.push_back(pase_combate);
    deck.push_back(genesectv);
    deck.push_back(mewvmax);
    deck.push_back(selena);
    deck.push_back(mewvmax);
    deck.push_back(pase_combate);
    deck.push_back(cinturon_eleccion);
    deck.push_back(bloc_amigos);
    deck.push_back(cramobot);
    deck.push_back(aspiradora_perdida);
    deck.push_back(cinturon_eleccion);
    deck.push_back(genesectv);
    deck.push_back(aspiradora_perdida);
    deck.push_back(oricorio);
    deck.push_back(mewv);
    deck.push_back(doble_energia_turbo);
    deck.push_back(caramelo_energetico);
    deck.push_back(ordenes_jefe);
    deck.push_back(pluma_ball);
    deck.push_back(doble_energia_turbo);
    deck.push_back(caramelo_energetico);
    deck.push_back(pluma_ball);
    deck.push_back(ultra_ball);
    deck.push_back(senda_blanquecima);
    deck.push_back(mewv);
    deck.push_back(ordenes_jefe);
    deck.push_back(senda_blanquecima);
    deck.push_back(cramobot);
    deck.push_back(ultra_ball);
    deck.push_back(pluma_ball);
    deck.push_back(pase_combate);
    deck.push_back(cambio);
    deck.push_back(serena);
    deck.push_back(mewvmax);
    deck.push_back(genesectv);

    bn::vector<carta,60> deck_oponente;

    deck_oponente.push_back(mewv);
    deck_oponente.push_back(cuerda_huida);
    deck_oponente.push_back(serena);
    deck_oponente.push_back(ultra_ball);
    deck_oponente.push_back(ordenes_jefe);
    deck_oponente.push_back(petra);
    deck_oponente.push_back(botas_de_expedicion);
    deck_oponente.push_back(cuerda_huida);
    deck_oponente.push_back(pluma_ball);
    deck_oponente.push_back(cramobot);
    deck_oponente.push_back(ultra_ball);
    deck_oponente.push_back(mewv);
    deck_oponente.push_back(botas_de_expedicion);
    deck_oponente.push_back(cramobot);
    deck_oponente.push_back(pase_combate);
    deck_oponente.push_back(ciudad_perdida);
    deck_oponente.push_back(cambio);
    deck_oponente.push_back(doble_energia_turbo);
    deck_oponente.push_back(ciudad_perdida);
    deck_oponente.push_back(aspiradora_perdida);
    deck_oponente.push_back(juez);
    deck_oponente.push_back(caramelo_energetico);
    deck_oponente.push_back(doble_energia_turbo);
    deck_oponente.push_back(genesectv);
    deck_oponente.push_back(caramelo_energetico);
    deck_oponente.push_back(pase_combate);
    deck_oponente.push_back(genesectv);
    deck_oponente.push_back(mewvmax);
    deck_oponente.push_back(selena);
    deck_oponente.push_back(mewvmax);
    deck_oponente.push_back(pase_combate);
    deck_oponente.push_back(cinturon_eleccion);
    deck_oponente.push_back(bloc_amigos);
    deck_oponente.push_back(cramobot);
    deck_oponente.push_back(aspiradora_perdida);
    deck_oponente.push_back(cinturon_eleccion);
    deck_oponente.push_back(genesectv);
    deck_oponente.push_back(aspiradora_perdida);
    deck_oponente.push_back(oricorio);
    deck_oponente.push_back(mewv);
    deck_oponente.push_back(doble_energia_turbo);
    deck_oponente.push_back(caramelo_energetico);
    deck_oponente.push_back(ordenes_jefe);
    deck_oponente.push_back(pluma_ball);
    deck_oponente.push_back(doble_energia_turbo);
    deck_oponente.push_back(caramelo_energetico);
    deck_oponente.push_back(pluma_ball);
    deck_oponente.push_back(ultra_ball);
    deck_oponente.push_back(senda_blanquecima);
    deck_oponente.push_back(mewv);
    deck_oponente.push_back(ordenes_jefe);
    deck_oponente.push_back(senda_blanquecima);
    deck_oponente.push_back(cramobot);
    deck_oponente.push_back(ultra_ball);
    deck_oponente.push_back(pluma_ball);
    deck_oponente.push_back(pase_combate);
    deck_oponente.push_back(cambio);
    deck_oponente.push_back(serena);
    deck_oponente.push_back(mewvmax);
    deck_oponente.push_back(genesectv);


    while(true)
    {
        pantalla_inicio();
        batalla(deck,deck_oponente,veces_ramdom_usado);
        bn::core::update();
    }
}
