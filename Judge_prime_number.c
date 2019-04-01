#include<stdio.h>
#include<stdlib.h>
int jpn(int a){
	int i;
	printf("please enter a number you want to judge:");
	scanf("%d",&a);
	for(i=2;i<a-1;++i){
		if(a%i==0){
			printf("this is not a prime number!\n");
			return 0;
		}
	}
	printf("this is a prime number!\n");
	return 0;
}
int main (){
	int a;
	jpn(a);
	system("pause");
	return 0;
}