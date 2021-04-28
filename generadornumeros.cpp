#include "generadornumeros.h"

GeneradorNumeros::GeneradorNumeros(){
}

void GeneradorNumeros::generarMatrizAleatorio(long filas, long columnas, long minimo, long maximo, long ** & matriz){
    if (matriz){
        for (int idx = 0; idx < filas; idx++){
            delete matriz[idx];
        }
        delete [] matriz;
    }
    matriz = new long*[filas];
    for (int idx = 0; idx < filas; idx++){
        matriz[idx] = new long[columnas];
    }

    // llenar vacios derrepente

    srand(time(NULL));

    vector<thread> threads;

    for (int fila = 0; fila < filas; fila++){
        threads.push_back(std::thread(generarListaAleatoria, columnas, minimo, maximo, std::ref(matriz[fila])));
    }

    for (int fila = 0; fila < filas; fila++){
        threads.at(fila).join();
    }
}

void GeneradorNumeros::generarListaAleatoria(long tam, long minimo, long maximo, long * & lista){
    for (long idx = 0; idx < tam; idx++){
        lista[idx] = minimo + rand() % maximo;
    }
}
