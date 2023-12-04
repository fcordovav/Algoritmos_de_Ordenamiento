#include <iostream>
using namespace std;

// Función para verificar si el array está ordenado
bool isSorted(int a[], int n) {
    while (--n > 0)
        if (a[n] < a[n - 1])
            return false;
    return true;
}

// Función para generar una permutación del array
void shuffle(int a[], int n) {
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

// Función que ordena el array usando Bogo sort
void bogosort(int a[], int n) {
    // Si el array no está ordenado, entonces se mezcla
    // el array nuevamente y se repite el proceso
    while (!isSorted(a, n))
        shuffle(a, n);
}

