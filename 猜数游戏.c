#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int menu() {
	int c;
	do {
		printf("------------------\n");
		printf("-----1.play-------\n");
		printf("-----2.exit-------\n");
		printf("------------------\n");
		scanf("%d", &c);
		if (c == 2) {
			break;
		}
		if (c != 1) {
			printf("error! plese enter number 1 or 2\n");
		}
	} while (c != 1);
	return c;
}
int game() {
	srand((unsigned int )time(0));
	int answer = rand() % 100 + 1;
	int a,flag=1;
	while(flag == 1) {
		printf("plese enter a number:");
		scanf("%d", &a);
		if (a > answer) {
			printf("The answer is smaller\n");
		}
		else if (a < answer) {
			printf("The answer is bigger\n");
		}
		else {
			printf("congratulation!!!You are so good!!!\n");
			flag = 0;
		}
	}
	return 0;
}
int main() {
	if (menu() == 2) {
		return 0;
	}
	else {
		game();
	}
	system("pause");
	return 0;
}