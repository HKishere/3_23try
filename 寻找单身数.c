#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int singledog(int* a) {
	int res=0;
	for (int i = 0; i < 9; ++i) {
		res ^= a[i];
	}
	return res;
}
int main (){
	int a[11] = { 1,1,3,4,2,3,4,6,6,5,5 };
	printf("%d\n",singledog(a));
	system("pause");
	return 0;
}