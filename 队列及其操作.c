#define  _CRT_SECURE_NO_WARNINGS
#include "queue.h"
int main (){
	Queue* qu = (Queue*)malloc(sizeof(Queue));
	QueueInit(qu);
	QueuePush(qu, 1);
	QueuePush(qu, 2);
	QueuePush(qu, 3);
	QueuePush(qu, 4);
	QueuePush(qu, 5);
	QueuePrint(qu);
	QueuePop(qu);
	QueuePrint(qu);
	QueuePush(qu, 6);
	QueuePrint(qu);
	printf("size of queue:%d\n", QueueSize(qu));
	printf("first data is : %d\n", QueueFront(qu));
	printf("last data is : %d\n", QueueBack(qu));
	QueueDestroy(qu);
	system("pause");
	return 0;
}