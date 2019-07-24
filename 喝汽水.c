#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define  START_MONEY 20//初始金钱
int main (){
	int bottle = 0;
	int alreadydrink = 0;
	int money = START_MONEY;
	while (money > 0) {
		alreadydrink += money;
		bottle += money;
		money = bottle / 2;
		bottle %= 2;
	}
	printf("you can drink %d bottle of drink\n", alreadydrink);
	system("pause");
	return 0;
}