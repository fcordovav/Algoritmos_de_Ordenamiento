#include <iostream>

using namespace std;

// Definiendo la funcion
void burbuja(int arr[], int n);
void varianteBurbuja(int L[], int n);

int main() {
    int L[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(L) / sizeof(L[0]); 
    
    cout << "Arreglo original: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    burbuja(L, n);
    //varianteBurbuja(L, n);

    cout << "Arreglo ordenado: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}

void burbuja(int L[], int n) {
    int aux;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (L[j] >L[j + 1]) {
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
            if (L[j] >L[j + 1]) {
                swap(L[j], L[j + 1]);
            }
        }
    }
}
