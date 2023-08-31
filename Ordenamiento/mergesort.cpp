#include <iostream>
#include <vector>

using namespace std;

void fusionar(int L[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    vector<int> izquierdaArr(n1);
    vector<int> derechaArr(n2);

    for (int i = 0; i < n1; i++)
        izquierdaArr[i] = L[izquierda + i];
    for (int j = 0; j < n2; j++)
        derechaArr[j] = L[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;

    while (i < n1 && j < n2) {
        if (izquierdaArr[i] <= derechaArr[j]) {
            L[k] = izquierdaArr[i];
            i++;
        } else {
            L[k] = derechaArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        L[k] = izquierdaArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        L[k] = derechaArr[j];
        j++;
        k++;
    }
}

void mergeSort(int L[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        mergeSort(L, izquierda, medio);
        mergeSort(L, medio + 1, derecha);

        fusionar(L, izquierda, medio, derecha);
    }
}
