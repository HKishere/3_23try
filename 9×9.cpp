#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	int c = 9;
	for (a = 1; a <= 9; a++)
	{
		for (b = a; b <10; b++)
		{
			printf("%d*%d=%d\t", a, b, a*b);
			
		}
		printf("\n");
	}
	system("pause");
	return 0;
}