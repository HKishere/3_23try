#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int JudgeYears(int year) {//创建一个函数如果判断是闰年,则返回1,不是返回0
	if (year%400==0){
		return 1;
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main (){
	int year;
	printf("please enter the year you want to judge whether it is a leap year or not:");
	scanf("%d", &year);
	if (JudgeYears(year) == 1) {
		printf("this year is a leap year");
	}
	else {
		printf("this year isn't a leap year\n");
	}
	system("pause");
	return 0;
}