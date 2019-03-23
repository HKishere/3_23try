#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main() {
	char str1[] = ("**************");
	char str2[] = ("              ");
	int left = 0;
	int right= 0;
	int flag = strlen(str1) - 1;
	for (right=0; right != flag; right++) {
		str2[right] = str1[right];
		Sleep(40);
		system("cls");
		printf("%s\n", str2);
	}
	for (left = flag; left != 0; left--) {
		str1[left] = str2[flag];
		Sleep(40);
		system("cls");
		printf("%s\n", str1);
	}
	system("pause");
	return 0;
}