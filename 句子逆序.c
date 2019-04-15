#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
char* ReverseLetter(char* source) {
	unsigned int i = 0;
	unsigned int len = strlen(source) - 1;
	char temp;
	while (i < len) {
		temp = source[i];
		source[i] = source[len];
		source[len] = temp;
		++i;
		--len;
	}
	return source;
}

char* ReverseWord(char* source){
	char* PrtOfWord;
	char* PrtOfLetter=&source[0];
	PrtOfWord = PrtOfLetter;
	for (PrtOfLetter = &source[0]; *PrtOfLetter!= '\0';++PrtOfLetter) {
		if (*PrtOfLetter==' '){
			*PrtOfLetter = '\0';
			ReverseLetter(PrtOfWord);
			*PrtOfLetter = ' ';
			PrtOfWord = PrtOfLetter+1;
		}
	}
	ReverseLetter(PrtOfWord);
	return source;
}
char* ReverseSentence(char* source) {
	ReverseLetter(source);
	ReverseWord(source);
	return source;
}
int main (){
	char str[] = "kishere is god";
	printf("%s\n", ReverseSentence(str));
	system("pause");
	return 0;
}