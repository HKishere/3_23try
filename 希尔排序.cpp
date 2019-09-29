#include <iostream>
using namespace std;

int Num2[]{ 3,2,5,6,4,1,9,8,8,10,1 };
void ShellSort(int a[], int n) {
	int step = 1;
	while (step <= n / 3) {
		step = 3 * step + 1;
	}
	while (step >= 1) {
		for (int i = step; i < n; ++i) {
			for (int j = i; j >= step&&a[j] < a[j - step]; j -= step) {
				std::swap(a[j], a[j - step]);
			}
		}
		step = step / 3;
	}
}
int main3() {
	ShellSort(Num2, 11);
	for (int i = 0; i < 11; ++i) {
		cout << Num2[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}