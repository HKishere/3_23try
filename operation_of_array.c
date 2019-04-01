#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int  init(int* a) {//对数组赋值
	int i = 0;
	while (i<10){
		printf("please enter a[%d]=",i);
		scanf("%d", a);
		a += 1;
		++i;
	}
	return 0;
}
int empty(int* a) {//清空数组
	int i = 0;
	while (i < 10) {
		*a = NULL;
		a += 1;
		++i;
	}
	return 0;
}
int reverse(int* a) {//逆置数组中的元素
	int *b=a+9;
	int temp;
	while (a<b){
		temp = *a;
		*a = *b;
		*b = temp;
		++a;
		--b;
	}
	return 0;
}
int main (){
	int arr[10];
	int i=0;
	init(arr);
	printf("数组 a[10]={");
	for (i = 0; i < 10; i++) {
		printf("%d,", arr[i]);
	}
	printf("}\n");//遍历数组并打印,以确保结果正确
	reverse(arr);
	printf("数组 a[10]={");
	for (i = 0; i < 10; i++) {
		printf("%d,", arr[i]);
	}
	printf("}\n");
	empty(arr);
	printf("数组 a[10]={");//遍历数组并打印,以确保结果正确
	for (i = 0; i < 10; i++) {
		printf("%d,", arr[i]);
	}
	printf("}\n");//遍历数组并打印,以确保结果正确
	system("pause");
	return 0;
}