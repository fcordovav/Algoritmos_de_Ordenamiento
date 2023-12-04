all: prog

prog: funciones.h main.cpp burbuja.cpp insertionsort.cpp selectionsort.cpp quicksort.cpp heapsort.cpp mergesort.cpp bucketsort.cpp bogosort.cpp
	g++ -fopenmp main.cpp funciones.h burbuja.cpp insertionsort.cpp selectionsort.cpp quicksort.cpp heapsort.cpp mergesort.cpp bucketsort.cpp bogosort.cpp -o prog

clean:
	rm -f prog
