using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k, j, p;
	k = 0;
	j = 0;
	p = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	for (i = 0; i < N; i++) {
		if (A[i] < 0) {
			k++;
		};
	};
	double* B = new double[N + k];
	for (i = 0; i < (N + k); i++) {
		j = 0;
		if (A[p] < 0) {
			B[i + 1] = 0;
			j++;
		};
		if ((i < (N + k)) & (i >= 0)) { 
			B[i] = A[p];
		};
		if (j == 1) {
			i++;
		};
		if (p < (N)) {
			p++;
		};
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < N + k; i++) {
		cout << B[i] << endl;
	};
	delete[] A;
	return 0;
}
