#include <iostream>

using namespace std;

void heapify(int L[], int n, int i) {
    int mayor = i;
    int izquierda = 2 * i + 1;
    int derecha = 2 * i + 2;

    if (izquierda < n && L[izquierda] > L[mayor]) {
        mayor = izquierda;
    }

    if (derecha < n && L[derecha] > L[mayor]) {
        mayor = derecha;
    }

    if (mayor != i) {
        swap(L[i], L[mayor]);
        heapify(L, n, mayor);
    }
}

void heapSort(int L[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(L, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(L[0], L[i]);
        heapify(L, i, 0);
    }
}

