#ifndef GENERADORNUMEROS_H
#define GENERADORNUMEROS_H
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class GeneradorNumeros{
    public:
        GeneradorNumeros();

        static void generarMatrizAleatorio(long, long, long, long, long ** &);
};

#endif // GENERADORNUMEROS_H
