#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int power(int a, int b) {
	if (b > 0) {
		return a*power(a, b - 1);
	}
	else {
		return 1;
	}
}
int main (){
	int n, k;
	printf("please enter a num:");
	scanf("%d", &n);
	printf("please enter another num:");
	scanf("%d", &k);
	printf("n^k=%d\n",power(n,k));
	system("pause");
	return 0;
}