#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int  init(int* a) {//�����鸳ֵ
	int i = 0;
	while (i<10){
		printf("please enter a[%d]=",i);
		scanf("%d", a);
		a += 1;
		++i;
	}
	return 0;
}
int empty(int* a) {//�������
	int i = 0;
	while (i < 10) {
		*a = NULL;
		a += 1;
		++i;
	}
	return 0;
}
int reverse(int* a) {//���������е�Ԫ��
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
	printf("���� a[10]={");
	for (i = 0; i < 10; i++) {
		printf("%d,", arr[i]);
	}
	printf("}\n");//�������鲢��ӡ,��ȷ�������ȷ
	reverse(arr);
	printf("���� a[10]={");
	for (i = 0; i < 10; i++) {
		printf("%d,", arr[i]);
	}
	printf("}\n");
	empty(arr);
	printf("���� a[10]={");//�������鲢��ӡ,��ȷ�������ȷ
	for (i = 0; i < 10; i++) {
		printf("%d,", arr[i]);
	}
	printf("}\n");//�������鲢��ӡ,��ȷ�������ȷ
	system("pause");
	return 0;
}