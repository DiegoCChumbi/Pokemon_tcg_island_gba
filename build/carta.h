#ifndef CARTA_H
#define CARTA_H

#include "bn_string.h"

struct carta{
    bn::string<32> nombre;
    int tipo_carta;     //1-pokemon_basico 2-pokemon_stage1 3-pokemon_stage2 4-objeto 5-partidario 6-estadio 7-energia
};

#endif