#include "arrayheader.h"
#include <iostream>
using namespace std;

void Array::MostrarArray(int A[]) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << "";
	}
}

int Array::MostrarMayor(int A[]) {
	int mayor = A[0];
	for (int i = 0; i < n; i++) {
		if (A[i] > mayor)mayor = A[i];
	}
	return mayor;
}

int Array::MostrarMenor(int A[]) {
	int menor = A[0];
	for (int i = 0; i < n; i++) {
		if (A[i] < menor ) menor= A[i];
	}
	return menor;
}

double Array::MostrarPromedio(int A[]) {
	double promedio = 0;
	for (int i = 0; i < n; i++) promedio += A[i];
	return promedio / n;
	
}