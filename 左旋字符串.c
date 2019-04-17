#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* leftroll(char* source ,unsigned int i) {
	unsigned int len = strlen(source)-1;
	char temp;
	i %= len;
	for (; i != 0; --i) {
		temp = source[len];
		for (unsigned int n = len; n > 0; --n) {
			source[n] = source[n - 1];
		}
		source[0] = temp;
	}
	return source;
}
int main (){
	char str[] = "kishere";
	leftroll(str, 90);
	printf("%s\n", str);
	system("pause");
	return 0;
}