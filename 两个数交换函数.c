#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b) {//定义两个指针,让他们中的内容交换
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main (){
	int a=10,b=20;
	swap(&a, &b);//将a,b的地址传递给函数
	printf("%d\t%d\n", a, b);
	system("pause");
	return 0;
}