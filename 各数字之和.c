#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fun(int source) {
	int tmp=source;
    if(tmp>=10){
        return tmp%10+fun(tmp / 10);
    }
    else{
        return source;
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