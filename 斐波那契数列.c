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
	//result = Fibonacci(a);//ʹ�õݹ���㷨
	for (int i = a-2; i > 0;--i) {//��ʹ�õݹ���㷨������ǰ�������Ѿ�����������ѭ��������ʵ��ֵҪС2��
		result = result + temp;
		temp = result - temp;//temp�б���result֮ǰ��ֵ
	}
	printf("%d\n", result);
	system("pause");
	return 0;
}