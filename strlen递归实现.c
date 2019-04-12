#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
unsigned int strlens(char* str) {
	if (*str!='\0'){
		return 1+strlens(str + 1);
	}
	else {
		return 0;
	}
}
int main (){
	char str[] = { "kishere" };
	unsigned int len=strlens(str);
	printf("the lenth of str =%d\n",len);
	system("pause");
	return 0;
}