#include <iostream>

using namespace std;

void selectionSort(int L[], int n);

int main() {
    int L[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(L) / sizeof(L[0]);

    cout << "Arreglo original: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    selectionSort(L, n);

    cout << "Arreglo ordenado: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}

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
