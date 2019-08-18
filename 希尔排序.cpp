#include<iostream>
#include <vector>
using namespace std;

vector<int> arr;

void shell_sort(vector<int> arr, int length) {
	int h = 1;
	while (h < length / 3) {
		h = 3 * h + 1;
	}
	while (h >= 1){
		for (int i = h; i < length; ++i) {
			for (int j = i; j >= h&&arr[j] < arr[j - h]; j -= h) {
				swap(arr[j], arr[j - h]);
			}
		}
		h = h / 3;
	}
}
