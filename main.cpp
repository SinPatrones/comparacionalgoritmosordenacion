#include <iostream>
#include "generadornumeros.h"
#include "ordenacion.h"
#include "funciones.h"
#include "medidor.h"

using namespace std;

int main(){
    long ** matriz1 = NULL;
    long ** matriz2 = NULL;
    long ** matriz3 = NULL;

    const int FILAS = 10;
    long TAM = 10000;

    const long MAX = 10000;
    const long MIN = 100;

    cout << ".,BURBUJA,INSERSION,QUICKSORT" << endl;
    for (long cantidades = 0; cantidades <= 1000000; cantidades += 5000){
        double promedioBurbuja = 0;
        double promedioInsersion = 0;
        double promedioQuicksort = 0;

        GeneradorNumeros::generarMatrizAleatorio(FILAS, cantidades, MIN, MAX, matriz1);
        GeneradorNumeros::generarMatrizAleatorio(FILAS, cantidades, MIN, MAX, matriz2);
        GeneradorNumeros::generarMatrizAleatorio(FILAS, cantidades, MIN, MAX, matriz3);

        for (int idx = 0; idx < FILAS; idx++){
            double tiempoBurbuja = Medidor::medirTiempoDemora(Ordenacion::ordenacionBurbuja, matriz1[idx], cantidades);
            promedioBurbuja += tiempoBurbuja;
            double tiempoInsersion = Medidor::medirTiempoDemora(Ordenacion::ordenacionInsercion, matriz2[idx], cantidades);
            promedioInsersion += tiempoInsersion;
            //double tiempoQuicksort = Medidor::medirTiempoDemora(Ordenacion::quicksort, matriz3[idx], 0, cantidades - 1);
            //promedioQuicksort += tiempoQuicksort;
        }

        cout << cantidades << "," << promedioBurbuja << "," << promedioInsersion << "," << promedioQuicksort << endl;
    }

    return 1;
}
