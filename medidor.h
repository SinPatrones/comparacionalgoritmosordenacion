#ifndef MEDIDOR_H
#define MEDIDOR_H
#include <ctime>
#include "ordenacion.h"
#include <functional>

class Medidor{
public:
    Medidor();
    //static double medirTiempoDemora(void (Ordenacion::*)(T*, int), T *, int);
    static double medirTiempoDemora(function<void(long *, long)>, long *,long);
    static double medirTiempoDemora(function<void(long *, long, long)> algoritmo, long * lista, long min, long max);
};

#endif // MEDIDOR_H
