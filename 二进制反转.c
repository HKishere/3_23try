#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

unsigned int unsigned_int_reverse_bit(unsigned int soure) {//ʵ�κ��βκͷ���ֵ��Ҫ���޷�����
	int sn = 2;
	unsigned int temp,result=0;
	for (int i = 0; i < 32; soure /= sn, ++i) {
		temp = soure % sn;//ȡ��sn�����µ����λ
		result = result * sn + temp;//����������
	}
	return result;
}

int main (){
	unsigned int soure;
	scanf("%d", &soure);
	printf("%u",unsigned_int_reverse_bit(soure));
	system("pause");
	return 0;
}