#include "num2.h"

void replace2(int* mas, int size) {
	for (int i = 1; i < size; i += 2) {
		int save = mas[i - 1];
		mas[i - 1] = mas[i];
		mas[i] = save;
	}
}

void print2(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}