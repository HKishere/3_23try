#include<stdio.h>
#include<stdlib.h>
int main (){
	long long cha;
	printf("please enter the characters:");
	while ((cha = getchar()) != EOF) {
		if (cha>='a'&&cha<='z'){
			printf("\n%s ", cha - 32);
		}
		else if (cha >= 'A'&&cha <= 'Z') {
			printf("\n%s", cha + 32);
		}
	}
	system("pause");
	return 0;
}