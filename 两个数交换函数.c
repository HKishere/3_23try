#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b) {//��������ָ��,�������е����ݽ���
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main (){
	int a=10,b=20;
	swap(&a, &b);//��a,b�ĵ�ַ���ݸ�����
	printf("%d\t%d\n", a, b);
	system("pause");
	return 0;
}