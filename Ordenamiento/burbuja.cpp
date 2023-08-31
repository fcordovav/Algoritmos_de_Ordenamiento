#include <iostream>

using namespace std;

void burbuja(int L[], int n) {
    int aux;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (L[j] > L[j + 1]) {
                aux = L[j];
                L[j] = L[j + 1];
                L[j + 1] = aux;
            }
        }
    }
}

void varianteBurbuja(int L[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (L[j] > L[j + 1]) {
                swap(L[j], L[j + 1]);
            }
        }
    }
}
