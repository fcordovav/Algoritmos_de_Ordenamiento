#ifndef FUNCIONES_H
#define FUNCIONES_H

using namespace std;

void burbuja(int arr[], int n);
void varianteBurbuja(int L[], int n);

void insertionSort(int L[], int n);

void selectionSort(int L[], int n);

void quickSort(int L[], int izquierda, int derecha);
int particionar(int L[], int izquierda, int derecha);

void heapSort(int L[], int n);
void heapify(int L[], int n, int i);

void mergeSort(int L[], int izquierda, int derecha);
void fusionar(int L[], int izquierda, int medio, int derecha);

void bucketSort(int L[], int n);







#endif 