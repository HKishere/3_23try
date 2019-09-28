#include <iostream>
using namespace std;

//int Num1[]{ 3,2,5,6,4,1,9,8,8,10,1 };
int Num1[]{ 11,10,9,8,7,6,5,4,3,2,1 };
void BubbleSort(int a[], int n) {
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main2() {
	BubbleSort(Num1, 11);
	for (int i = 0; i < 11; ++i) {
		cout << Num1[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
