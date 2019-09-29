#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int>arr{ 5,6,8,4,1,2,9,3,7,10 };
int BinerySearch(std::vector<int>&a, int find) {
	std::sort(a.begin(), a.end());
	int mid = a.size() / 2, left = 0, right = (int)a.size() - 1;
	while (left <= right) {
		if (a[mid] == find) {
			return mid;
		}
		else if (a[mid] < find) {
			left = mid + 1;
		}
		else if (a[mid] > find) {
			right = mid - 1;
		}
		mid = (left + right) / 2;
	}
	return -1;
}

int main() {
	int ret = BinerySearch(arr, 3);
	if (ret == -1){
		std::cout << "NOt Find!" << std::endl;
	}
	else {
		std::cout << "Find it!" << "ÏÂ±êÎª:" << ret << std::endl;
	}
	system("pause");
	return 0;
}