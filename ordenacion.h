#ifndef ORDENACION_H
#define ORDENACION_H
#include <iostream>

using namespace std;

class Ordenacion{
private:
    static void swap(long &, long &);
    static int partition (long *, long, long);

public:
    Ordenacion();
    static void ordenacionBurbuja(long *, long);
    static void ordenacionInsercion(long *, long);
    static void quicksort(long *, long, long);
};

#endif // ORDENACION_H
