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
    int key, j;
    for (int i = 1; i < n; i++) {
        key = L[i];
        j = i - 1;
        
        while (j >= 0 && L[j] > key) {
            L[j + 1] = L[j];
            j = j - 1;
        }
        L[j + 1] = key;
    }
}