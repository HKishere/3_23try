#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int judgefunc(char* str) {
	char* a_ptr = str;
	char* b_ptr = a_ptr;
	for (; *a_ptr != '\0'; ++a_ptr) {
		for (; *b_ptr != '\0'; ++b_ptr) {
			if (*a_ptr == *b_ptr) {
				break;
			}
		}
		cout << *a_ptr;
		return 0;
	}
	cout << -1;
	return -1;
}

int main() {
	char str1[50];
	cin.get(str1, 50);
	judgefunc(str1);
	system("pause");
	return 0;

}