#define  _CRT_SECURE_NO_WARNINGS
#pragma one
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10

typedef int DataType;

typedef struct Node {
	DataType _data;
	PNode _next;
}Node,*PNode;

typedef struct Queue{
	PNode _head;
}Queue, *PQueue;

void QueueInit(Queue* q); 
void QueuePush(Queue* q, DataType data); 
void QueuePop(Queue* q); 
DataType QueueFront(Queue* q); 
DataType QueueBack(Queue* q); 
int QueueSize(Queue* q); 
int QueueEmpty(Queue* q); 
void QueueDestroy(Queue* q); 

