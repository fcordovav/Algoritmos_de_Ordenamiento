#include <iostream>

using namespace std;

void insertionSort(int L[], int n);

int main() {
    int L[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(L) / sizeof(L[0]);

    cout << "Arreglo original: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    insertionSort(L, n);

    cout << "Arreglo ordenado: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}


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
