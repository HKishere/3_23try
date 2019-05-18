#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

typedef int SDataType; 

// 定义链表的节点 
typedef struct SListNode 
{ 
	SDataType _data;
	struct SListNode* _pNext;
}Node, *PNode;

// 链表的结构，给一个指针指向链表第一个节点
typedef struct SList
{
	PNode _pHead; // 指向链表中的第一个节点 
}SList, *PSList;

// 链表的初始化 
void SListInit(SList* s){
	s->_pHead = NULL;
	return;
}

// 在链表s最后一个节点后插入值为data的节点 
void SListPushBack(SList* s, SDataType data) {
	PNode p = s->_pHead;
	if (p == NULL) {
		PNode newnode = (PNode)malloc(sizeof(Node));
		s->_pHead = newnode;
		newnode->_data = data;
		newnode->_pNext = NULL;
		return;
	}
	while (p->_pNext != NULL) {
		p = p->_pNext;
	}
	PNode newnode = (PNode)malloc(sizeof(Node));
	p->_pNext = newnode;
	newnode -> _data = data;
	newnode -> _pNext = NULL;
	return;
}

// 删除链表s最后一个节点 
void SListPopBack(SList* s) {
	PNode p = s->_pHead;
	while (p->_pNext->_pNext != NULL) {
		p = p->_pNext;
	}
	free(p->_pNext);
	p->_pNext = NULL;
	return;
}

// 在链表s第一个节点前插入值为data的节点 
void SListPushFront(SList* s, SDataType data) {
	PNode newnode = (PNode)malloc(sizeof(Node));
	newnode->_data = data;
	newnode->_pNext = s->_pHead;
	s->_pHead = newnode;
	return;
}

// 删除链表s的第一个节点 
void SListPopFront(SList* s) {
	PNode p = s->_pHead;
	s->_pHead = p->_pNext;
	free(p);
}

// 在链表的pos位置后插入值为data的节点 
void SListInsert(PNode pos, SDataType data) {
	PNode newnode = (PNode)malloc(sizeof(Node));
	newnode->_pNext = pos->_pNext;
	newnode->_data = data;
	pos->_pNext = newnode;
	return;
}

// 删除链表s中pos位置的节点 
void SListErase(SList* s, PNode pos){
	PNode p = s->_pHead;
	while (p->_pNext != pos) {
		p = p->_pNext;
	}
	p->_pNext = pos->_pNext;
	free(pos);
	return;
}

// 在链表中查找值为data的节点，找到返回该节点的地址，否则返回NULL 
PNode SListFind(SList* s, SDataType data) {
	PNode p = s->_pHead;
	do {
		if (p->_data == data){
			break;
		}
		p = p->_pNext;
	} while (p->_pNext != NULL);
	return p;
}
// 获取链表中有效节点的个数 
size_t SListSize(SList* s) {
	size_t size = 0;
	PNode p = s->_pHead;
	while (p){
		++size;
		p = p->_pNext;
	}
	return size;
}

// 检测链表是否为空 
int SListEmpty(SList* s) {
	if (s->_pHead != NULL) {
		return 1;
	}
	return 0;
}
// 将链表中有效节点清空 
void SListClear(SList* s) {
	PNode p = s->_pHead;
	while (p){
		p->_data = 0;
		p = p->_pNext;
	}
	return;
}

// 销毁链表 
void SListDestroy(PSList s) {
	PNode p = s->_pHead;
	PNode ptr = p;
	while (ptr) {
		p = ptr->_pNext;
		free(ptr);
		ptr = p;
	}
	free(s);
}
void SlistPrint(PSList p) {
	PNode prt = p->_pHead;
	while (prt != NULL){
		printf("%u ", prt->_data);
		prt = prt->_pNext;
	}
	printf("\n");
	return;
}
void testslist(PSList p) {
	SListInit(p);
	SListPushBack(p, 1);
	SListPushBack(p, 2);
	SListPushBack(p, 3);
	SListPushBack(p, 4);
	SListPushBack(p, 5);
	SlistPrint(p);
	SListPopBack(p);
	SlistPrint(p);
	SListPushFront(p, 0);
	SlistPrint(p);
	SListPopFront(p);
	SlistPrint(p);
	printf("size : %d\n", SListSize(p));
	PNode prt = SListFind(p, 3);
	SListErase(p , prt);
	SlistPrint(p);
	prt = SListFind(p, 2);
	SListInsert(prt, 77);
	SlistPrint(p);
	return;
}

int main (){
	PSList myslist = (PSList)malloc(sizeof(PSList));
	testslist(myslist);
	SListDestroy(myslist);
	system("pause");
	return 0;
}