#ifndef GENERADORNUMEROS_H
#define GENERADORNUMEROS_H
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include <vector>

using namespace std;

class GeneradorNumeros{
    public:
        GeneradorNumeros();

        static void generarMatrizAleatorio(long, long, long, long, long ** &);
        static void generarListaAleatoria(long, long, long, long * &);
};

#endif // GENERADORNUMEROS_H
