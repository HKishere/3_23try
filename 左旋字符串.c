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
int judgeleftrollstr(char* source, char* judgech) {
	char* temp = (char*)calloc(strlen(source) * 2 + 1, sizeof(char));
	if (temp==NULL){
		return -1;
	}
	strcpy(temp, source);
	strcat(temp, source);

	if (strstr(temp,judgech)) {
		free(temp);
		printf("find it!\n");
		return 1;
	}
	else {
		free(temp);
		printf("not find!\n");
		return 0;
	}
}
int main (){
	char str[] = "kishere";
	char str2[] = "she";
	leftroll(str, 1);
	judgeleftrollstr(str, str2);
	printf("%s\n", str);
	system("pause");
	return 0;
}