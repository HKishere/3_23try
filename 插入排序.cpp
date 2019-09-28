#include <iostream>
#include <vector>
using namespace std;

int Num[]{ 3,2,5,6,4,1,9,8,8,10,1 };
void InserSort(int arr[], int n) {
	for (int i = 1; i < n;++i) {
		for (int j = i; j > 0;--j) {
			if (arr[j -1]<=arr[j]){
				break;
			}
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
}

int main1() {
	InserSort(Num, 11);
	for (int i = 0; i < 11; ++i) {
		cout << Num[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}