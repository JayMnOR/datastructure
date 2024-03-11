#pragma once
#include <iostream>
using namespace std;

class Array {
private:
	int n;
public:
	Array(int n) { this->n = n; }
	Array(int x, int y) { this->n = n; }
	void MostrarArray(int A[]);
	int MostrarMayor(int A[]);
	int MostrarMenor(int A[]);
	double MostrarPromedio(int A[]);
};
