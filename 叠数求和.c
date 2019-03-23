#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	int sn = 0;
	printf("ÇëÊäÈëÊý×Ö£º");
	scanf("%d", &a);
	if (a >= 0 && a < 10) {
		sn = a * 5 + a * 40 + a * 300 + a * 2000 + a * 10000;
		printf("%d\n", sn);
	}
	else {
		printf("ÊäÈë´íÎó£¡");
	}
	system("pause");
	return 0;
}