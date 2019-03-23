#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100];
	int i;
	float n[100];
	float sum=0.0;
	for (i = 0; i < 100; i++) {
		a[i] = i + 1;
		n[i] = 1.0 / a[i];
		if (i % 2 == 1) {
			n[i] = n[i] * (-1);
		}
	}
	for (i = 0; i < 100; ++i) {
		sum = sum + n[i];
	}
	printf("%f\n",sum);
system("pause");
return 0;
}
