#include <iostream>

using namespace std;

void selectionSort(int L[], int n) {
    int menor, k;
    for (int i = 0; i < n - 1; i++) {
        menor = L[i];
        k = i;
        for (int j = i + 1; j < n; j++) {
            if (L[j] < menor) {
                menor = L[j];
                k = j;
            }
        }
        L[k] = L[i];
        L[i] = menor;
    }
}
