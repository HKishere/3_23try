#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fun(int a) {
	int size, i;
	for ( size= 0; a >= 10; ++size) {
		a / 10;
	}
	if (i<size){
		return a ;
	}
	else {
		return fun(a % 10);
		a = a % 10;
	}

}
int main (){
	int num;
	printf("please enter a num:");
	scanf("%d", &num);
	printf("%d",fun(num));
	system("pause");
	return 0;
}