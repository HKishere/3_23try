#include<stdio.h>
#include<stdlib.h>
int main() {
	
	int year=1000;
	int i = 1;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			printf("%d\t", year);
			i++;
		}		
	}
	system("pause");
	return 0;

}