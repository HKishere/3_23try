#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Fibonacci( int num) {
	if (num ==1||num==2) {
		return 1;
	}
	else
		return Fibonacci(num - 1)+Fibonacci(num-2);
}
int main (){
	long long a, result=1,temp=1;
	scanf("%ld", &a);
	//result = Fibonacci(a);//使用递归的算法
	for (int i = a-2; i > 0;--i) {//不使用递归的算法，由于前两个数已经给出，所以循环次数比实际值要小2；
		result = result + temp;
		temp = result - temp;//temp中保存result之前的值
	}
	printf("%d\n", result);
	system("pause");
	return 0;
}