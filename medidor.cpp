#include "medidor.h"

Medidor::Medidor(){}

double Medidor::medirTiempoDemora(function<void(long *, long)> algoritmo, long * lista, long tam){
    double t0 = 0, t1 = 0;

    t0=clock();
    algoritmo(lista, tam);
    t1 = clock();

    return (double(t1-t0)/CLOCKS_PER_SEC);
}

double Medidor::medirTiempoDemora(function<void(long *, long, long)> algoritmo, long * lista, long min, long max){
    double t0 = 0, t1 = 0;

    t0=clock();
    algoritmo(lista, min, max);
    t1 = clock();

    return (double(t1-t0)/CLOCKS_PER_SEC);
}
