#include <iostream>

using namespace std;

int particionar(int L[], int izquierda, int derecha) {
    int pivote = L[derecha];
    int i = izquierda - 1;

    for (int j = izquierda; j <= derecha - 1; j++) {
        if (L[j] < pivote) {
            i++;
            swap(L[i], L[j]);
        }
    }
    swap(L[i + 1], L[derecha]);
    return i + 1;
}

void quickSort(int L[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int indicePivote = particionar(L, izquierda, derecha);
        quickSort(L, izquierda, indicePivote - 1);
        quickSort(L, indicePivote + 1, derecha);
    }
}


