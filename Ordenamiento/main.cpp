#include <iostream>
#include "funciones.h"

using namespace std;


int main() {
    int L[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(L) / sizeof(L[0]); 
    
    cout << "Arreglo original: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    //burbuja(L, n);
    //varianteBurbuja(L, n);
    //insertionSort(L, n);
    //quickSort(L, 0, n - 1);
    //heapSort(L, n);
    //mergeSort(L, 0, n - 1);
    bucketSort(L, n);

    cout << "Arreglo ordenado: ";
    for (int u: L) {
        cout << u << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
