#ifndef CARTA_JUGADA_H
#define CARTA_JUGADA_H

struct carta_jugada{
    struct carta carta_base;
    int contadores=0;
    int vida;
};

#endif