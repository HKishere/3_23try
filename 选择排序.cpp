#include <iostream>
using namespace std;

int Num4[]{ 3,2,5,6,4,1,9,8,8,10,1 };
void SelectSort(int a[], int n) {
	int max;
	for (int i = 0; i < n; ++i) {
		max = i;
		for (int j = i; j < n; ++j) {
			if (a[j] > max){
				max = j;
			}
		}
		swap(a[max], a[i]);
	}
}
void Print(int a[]) {
	for (int i = 0; i < 11; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	SelectSort(Num4, 11);
	Print(Num4);
	system("pause");
	return 0;
}