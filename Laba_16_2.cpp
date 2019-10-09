using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k, n, j, m;
	k = 1;
	n = 0;
	m = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	int* B = new int[N];
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if ((i != j) & (A[i] == A[j])) {
				k++;
			};
		};
		if (k != 2) {
			B[m] = A[i];
			n++;
			m++;
		};
		k = 1;
	};
	cout << "Размер полученного массива: " << n << endl;
	cout << "Измененный массив: " << endl;
	for (m = 0; m < n; m++) {
		cout << B[m] << endl;
	};
	delete[] A;
	return 0;
}
