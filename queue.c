#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int QDataType;

typedef struct QNode{
	struct QNode* _pNext;
	QDataType _data;
}QNode;

typedef struct Queue{
	QNode* _front; // 指向队头元素 
	QNode* _back; // 指向队尾元素 
}Queue;

void QueueInit(Queue* q) {
	assert(q);
	q->_front = NULL;
	q->_back = q->_front;
	return;
}
void QueuePush(Queue* q, QDataType data) {
	if (q->_front==NULL){
		QNode* nownode = (QNode*)malloc(sizeof(QNode));
		nownode->_data = data;
		nownode->_pNext = NULL;
		q->_front = nownode;
		q->_back = nownode;
	}
	else {
		QNode* prt = q->_front;
		while (prt->_pNext != NULL){
			prt = prt->_pNext;
		}
		QNode* nownode = (QNode*)malloc(sizeof(QNode));
		prt->_pNext = nownode;
		q->_back = nownode;
		nownode->_data = data;
		nownode->_pNext = NULL;
	}
	return;
}
void QueuePop(Queue* q) {
	assert(q);
	QNode* temp = q->_front;
	q->_front = q->_front->_pNext;
	free(temp);
}
QDataType QueueFront(Queue* q) {
	assert(q);
	return q->_front->_data;
}
QDataType QueueBack(Queue* q) {
	assert(q);
	return q->_back->_data;
}
int QueueSize(Queue* q) {
	assert(q);
	QNode* prt = q->_front;
	int len = 0;
	for (len = 0; prt != NULL; ++len) {
		prt = prt->_pNext;
	}
	return len;
}
int QueueEmpty(Queue* q) {
	assert(q);
	if ((q->_back = q->_front) && (q->_front == NULL)){
		return 0;
	}
	return 1;
}
void QueuePrint(Queue* q) {
	QNode* prt = q->_front;
	while (prt != NULL){
		printf("%d ", prt->_data);
		prt = prt->_pNext;
	}
	printf("\n");
	return;
}
void QueueDestroy(Queue* q) {
	assert(q);
	QNode* prt = q->_front;
	QNode* p = prt;
	while (prt != NULL){
		p = prt->_pNext;
		free(prt);
		prt = p;
	}
	free(q);
	return;
}