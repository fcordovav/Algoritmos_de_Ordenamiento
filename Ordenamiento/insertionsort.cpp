#include <iostream>

void insertionSort(int L[], int n) {
    int aux, k;
    for (int i = 1; i < n; i++) {
        aux = L[i];
        k = i - 1;

        while (aux < L[k] && k > 0) {
            L[k + 1] = L[k];
            k = k - 1;
        }
        if (L[k] <= aux) {
            L[k + 1] = aux;
        } else {
            L[k + 1] = L[k];
            L[k] = aux;
        }
    }
}