#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void sort(int a[], int len) {
	int* start = &a[0];
	int* end = &a[len];
	while (start <= end) {
		if ((*start % 2 == 0) && (*end % 2 == 1)) {
			int temp = *start;
			*start = *end;
			*end = temp;
		}
		++start;
		--end;
	}
}

int main() {
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	sort(a, 9);
	int  i;
	for ( i = 0; i < 9; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
