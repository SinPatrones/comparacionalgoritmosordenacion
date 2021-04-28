#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>

using namespace std;

void mostrarLista(long * lista, long tam){
    cout << endl << "LISTA = ";
    for (int idx = 0; idx < tam; idx++){
        cout << lista[idx] << ", ";
    }
    cout << endl;
}


void vizualizarMatriz(long ** const & matriz, long filas, long columnas){
    for (int fila = 0; fila < filas; fila++){
        for (int columna = 0; columna < columnas; columna++){
            cout << matriz[fila][columna] << ", ";
        }
        cout << endl;
    }
}
#endif // FUNCIONES_H
