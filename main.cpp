#include <iostream>
#include "generadornumeros.h"
#include "ordenacion.h"
#include "funciones.h"
#include "medidor.h"

using namespace std;

int main(){
    long ** matriz;

    const int FILAS = 10;
    const long TAM = 10000;

    const long MAX = 1000;
    const long MIN = 10;

    cout << "Generando" << endl;
    GeneradorNumeros::generarMatrizAleatorio(FILAS, TAM, MIN, MAX, matriz);

    cout << "Ordenando" << endl;
    double promedioBurbuja = 0;
    double promedioInsersion = 0;
    double promedioQuicksort = 0;
    cout << "    BURBUJA,INSERSION,QUICKSORT" << endl;
    for (int idx = 0; idx < FILAS; idx++){
        cout << "VALOR,";
        double tiempoBurbuja = Medidor::medirTiempoDemora(Ordenacion::ordenacionBurbuja, matriz[idx], TAM);
        cout << tiempoBurbuja << ",";
        promedioBurbuja += tiempoBurbuja;
        double tiempoInsersion = Medidor::medirTiempoDemora(Ordenacion::ordenacionInsercion, matriz[idx], TAM);
        cout << tiempoInsersion << ",";
        promedioInsersion += tiempoInsersion;
        double tiempoQuicksort = Medidor::medirTiempoDemora(Ordenacion::quicksort, matriz[idx], 0, TAM - 1);
        cout << tiempoQuicksort << endl;
        promedioQuicksort += tiempoQuicksort;
    }

    //cout << "TIEMPO PROMEDIO BURBUJA ES: " << promedioDemora / FILAS << endl;

    // mostrarLista(matriz[0], TAM);


    return 1;
}
