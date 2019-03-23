#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[10][10][10];
	int i, n, s, t;
	int flag=0;
	for (i = 0; i < 10; ++i) {
		for (n = 0; n < 10; ++n) {
			for (s = 0; s < 10; ++s) {
				a[i][n][s] = i * 100 + n * 10 + s;
				if (a[i][n][s] == i*i*i + n*n*n + s*s*s) {
					printf("%d\t", a[i][n][s]);
					++flag;
				}
				
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}