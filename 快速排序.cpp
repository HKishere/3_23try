#include<iostream>
using namespace std;

int Num3[]{ 3,2,5,6,4,1,9,8,8,10,1 };
void QuickSort(int a[], int n) {
	if (n <= 1) {
		return;
	}
	int mark = 0;
	for (int i = 1; i < n; ++i) {
		if (a[i] < a[0]) {
			mark++;
			std::swap(a[mark], a[i]);
		}
	}
	std::swap(a[mark], a[0]);
	QuickSort(a, mark);
	QuickSort(&a[mark + 1], n - mark - 1);
}
void Print(int a[]) {
	for (int i = 0; i < 11; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	QuickSort(Num3, 11);
	Print(Num3);
	system("pause");
	return 0;
}
