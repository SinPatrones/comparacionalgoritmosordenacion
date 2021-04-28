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

    for (int fila = 0; fila < filas; fila++){
        for (int columna = 0; columna < columnas; columna++){
            matriz[fila][columna] = minimo + rand() % maximo;
        }
    }

}

