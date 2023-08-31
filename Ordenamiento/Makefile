all: prog

prog: funciones.h main.cpp burbuja.cpp insercion.cpp seleccion.cpp quicksort.cpp heapsort.cpp mergesort.cpp bucketsort.cpp
	g++ -fopenmp main.cpp funciones.h burbuja.cpp insercion.cpp seleccion.cpp quicksort.cpp heapsort.cpp mergesort.cpp bucketsort.cpp -o prog

clean:
	rm -f prog
