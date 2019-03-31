#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_ROW 3;
#define MAX_COL 3;
char ches[3][3];
int menu() {
		while (1) {
			int choose;
			printf("******************\n");
			printf("***** 1.play *****\n");
			printf("***** 2.exit *****\n");
			printf("******************\n");
			printf("please enter your choose:");
			scanf("%d", &choose);
			if (choose == 2) {
				printf("goodbye!\n");
				system("pause");
				return  1;
			}
			else if (choose != 1) {
				printf("illegal input ! please enter again:");
			}
			else {
				break;
			}
		}
	return 0;
}
int printboard() {
	printf(" - - -\n");
	printf("|%c|%c|%c|\n", ches[0][0], ches[0][1], ches[0][2]);
	printf(" - - -\n");
	printf("|%c|%c|%c|\n", ches[1][0], ches[1][1], ches[1][2]);
	printf(" - - -\n");
	printf("|%c|%c|%c|\n", ches[2][0], ches[2][1], ches[2][2]);
	printf(" - - -\n");
	return 0;
}
int playermove() {
	int row, col;
	while (1) {
		printf("please enter the coordinate you want to place your chess,use ','to separate :\n ");
		scanf("%d,%d", &row, &col);
		if (ches[row - 1][col - 1] != ' ') {
			printf("The coordinate you enter has been occupied !");
			continue;
		}
		else {
			ches[row - 1][col - 1] = 'X';
			printf("player place the chess in'%d,%d\n'", row, col);
			break;
		}
	}
	printboard();
	return 0;
}
int winner_checker() {
	char playerwin[3] = { 'X','X','X' };
	char computerwin[3] = { 'O','O','O' };
	if (strcmp(ches[0],playerwin)||strcmp(ches[1],playerwin)||strcmp(ches[2],playerwin)){
		return 0;//0 Express player win
	}
	else if (ches[0][0]=='X'&&ches[1][1]=='X'&&ches[2][2]=='X'){
		return 0;
	}
	if (strcmp(ches[0],computerwin)||strcmp(ches[1],computerwin)||strcmp(ches[2],computerwin)){
		return 1;// 1 means computer win
	}else if (ches[0][0] == 'O'&&ches[1][1] == 'O'&&ches[2][2] == 'O'){
		return 1;
	}
	return 2;
}
int computermove() {
	srand((unsigned int)time(0));
	while (1) {
		int col = rand() % 3 + 1;
		int row = rand() % 3 + 1;
		if (ches[row - 1][col - 1] != ' ') {
			continue;
		}
		else {
			ches[row - 1][col - 1] = 'O';
			printf("computer place the chess in'%d,%d\n'", row, col);
			break;
		}
		printboard();
	}
	return 0;
}
int game() {
	printboard();
	playermove();
	computermove();
	return 0;
}
int main (){
	if (menu()==1){
		return 0;
	}
	game();
	system("pause");
	return 0;
}