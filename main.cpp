#include <iostream>
#include "generadornumeros.h"
#include "ordenacion.h"
#include "funciones.h"
#include "medidor.h"

using namespace std;

int main(){
    long ** matriz = NULL;

    const int FILAS = 10;
    long TAM = 100;

    const long MAX = 10000;
    const long MIN = 100;




    cout << ".\tBURBU\tINSERS\tQUICKSORT" << endl;
    for (long cantidades = 100; cantidades <= 1000000; cantidades *= 10){
        double promedioBurbuja = 0;
        double promedioInsersion = 0;
        double promedioQuicksort = 0;

        GeneradorNumeros::generarMatrizAleatorio(FILAS, cantidades, MIN, MAX, matriz);

        for (int idx = 0; idx < FILAS; idx++){
            double tiempoBurbuja = Medidor::medirTiempoDemora(Ordenacion::ordenacionBurbuja, matriz[idx], cantidades);
            promedioBurbuja += tiempoBurbuja;
            double tiempoInsersion = Medidor::medirTiempoDemora(Ordenacion::ordenacionInsercion, matriz[idx], cantidades);
            promedioInsersion += tiempoInsersion;
            double tiempoQuicksort = Medidor::medirTiempoDemora(Ordenacion::quicksort, matriz[idx], 0, cantidades - 1);
            promedioQuicksort += tiempoQuicksort;
        }

        cout << cantidades << "\t" << promedioBurbuja << "\t" << promedioInsersion << "\t" << promedioQuicksort << endl;
    }

    //cout << "TIEMPO PROMEDIO BURBUJA ES: " << promedioDemora / FILAS << endl;

    // mostrarLista(matriz[0], TAM);


    return 1;
}
