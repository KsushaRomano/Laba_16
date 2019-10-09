using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k, n;
	k = 0;
	n = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	int* B = new int[N];
	for (i = 0; i < N; i++) {
		if (A[i] != A[i - 1]) {
			B[k] = A[i];
			k++;
			n++;
		};
	};
	cout << "Измененный массив: " << endl;
	for (k = 0; k < n; k++) {
		cout << B[k] << endl;
	};
	delete[] A;
	return 0;
}
