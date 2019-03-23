#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	int c = 1;
	for (a = 100; a <= 200; a++) {
		for (b = 2; b <= a; b--) {
			if (a%b == 0)
				break;
			printf("%d\t", a);
		}
	}
	if (c == 5)
	printf("\n");
system("pause");
return 0;
}