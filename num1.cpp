#include "num1.h"

double* create1(double* mas, int size) {
	mas = new double[size];
	return mas;
}

void full1(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 200 - 100;
	}
}

void print1(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

void del1(double* mas) {
	delete[] mas;
}