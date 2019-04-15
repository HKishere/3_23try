#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

unsigned int unsigned_int_reverse_bit(unsigned int soure) {//实参和形参和返回值都要是无符号数
	int sn = 2;
	unsigned int temp,result=0;
	for (int i = 0; i < 32; soure /= sn, ++i) {
		temp = soure % sn;//取出sn进制下的最高位
		result = result * sn + temp;//创造逆序数
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