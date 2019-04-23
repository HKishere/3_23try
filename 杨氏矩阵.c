#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int findnum(int a[][3], int x, int y, int find) {
	int i = x;
	int n = y - 1;
	while (i > 0 && n < y) {
		if (a[i][n] < find ) {
			++n;
		}
		else if (a[i][n] > find) {
			--i;
		}
		else {
			return 1;
		}
	}
	return 0;	
}

int main (){
	int a[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int find;
	if (findnum(a, 3, 3, 4) == 1) {
		printf("find!");
	}
	else {
		printf("not find!");
	}
	scanf("%d", &find);
	system("pause");
	return 0;
}