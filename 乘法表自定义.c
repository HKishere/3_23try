#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main (){
	int a, b, n;
	printf("please enter the number:");
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d", a, b, a*b);
			if (a*b < 10) {
				printf("   \t");
			}
			else if(a*b<100){
				printf("  \t");
			}
			else {
				printf(" \t");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}