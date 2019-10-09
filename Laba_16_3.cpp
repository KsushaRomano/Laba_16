using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, max, min, h, l, k, j;
	k = 0;
	max = 0;
	min = 0;
	h = 0;
	l = 0;
	j = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	max = A[0];
	min = A[0];
	double* B = new double[N + 2];
	for (i = 0; i < N; i++) {
		if (A[i] < min) {
			min = A[i];
			l = i;
		}
		else if (A[i] > max) {
			max = A[i];
			h = i;
		};
	};
	for (i = 0; i < N + 2; i++) {
		j = 0;
		if ((k == l) & (k == 0)) {
			B[i] = 0;
			i++;
		}
		else if (k == l) {
			B[i] = 0;
			i++;
		};
		if (k == h) {
			B[i + 1] = 0;
			j = 1;
		};
		if ((i < N + 2) & (i >= 0)) {
			B[i] = A[k];
		};
		if (j == 1) {
			i++;
		};
		if (k < N) {
			k++;
		};
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < (N + 2); i++) {
		cout << B[i] << endl;
	};
	delete[] A;
	return 0;
}
