#include <iostream>

using namespace std;

int particionar(int L[], int izquierda, int derecha);
void quickSort(int L[], int izquierda, int derecha);

int main() {
    int L[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(L) / sizeof(L[0]);

    cout << "Arreglo original: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    quickSort(L, 0, n - 1);

    cout << "Arreglo ordenado: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}


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


