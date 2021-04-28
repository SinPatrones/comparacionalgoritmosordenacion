#include "ordenacion.h"

Ordenacion::Ordenacion(){}

void Ordenacion::swap(long & a, long & b){
    long t = a;
    a = b;
    b = t;
}

int Ordenacion::partition(long * arr, long low, long high){
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++){
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}


void Ordenacion::ordenacionBurbuja(long * lista, long tam){
    int i, j;
    for (i = 0; i < tam-1; i++){
        for (j = 0; j < tam-i-1; j++){
            if (lista[j] > lista[j+1]){
                int tmp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = tmp;
            }
        }
    }
}

void Ordenacion::ordenacionInsercion(long * lista, long tam){
   long key, j;
   for(long i = 1; i<tam; i++) {
      key = lista[i];
      j = i;
      while(j > 0 && lista[j-1]>key) {
         lista[j] = lista[j-1];
         j--;
      }
      lista[j] = key;
   }
}

void Ordenacion::quicksort(long * arr, long low, long high){
    if (low < high){
        long pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
