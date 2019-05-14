#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

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
	s->_pHead = (PNode)malloc(sizeof (PSList));
	return;
}

// 在链表s最后一个节点后插入值为data的节点 
void SListPushBack(SList* s, SDataType data) {
	PNode p = s->_pHead;
	while (p->_pNext) {
		p = p->_pNext;
	}
	PNode newnode = (PNode)malloc(sizeof(PNode));
	p->_pNext = newnode;
	newnode -> _data = data;
	newnode -> _pNext = NULL;
	return;
}

// 删除链表s最后一个节点 
void SListPopBack(SList* s) {
	PNode p = s->_pHead;
	while (p->_pNext->_pNext) {
		p = p->_pNext;
	}
	free(p->_pNext);
	p->_pNext = NULL;
	return;
}

// 在链表s第一个节点前插入值为data的节点 
void SListPushFront(SList* s, SDataType data) {
	PNode newnode = (PNode)malloc(sizeof(PNode));
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
}

// 删除链表s中pos位置的节点 
void SListErase(SList* s, PNode pos){
	PNode p = (PNode)malloc(sizeof(Node));
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
		if (p->_data = data){
			break;
		}
		p = p->_pNext;
	} while (p->_pNext == NULL);
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
void SListDestroy(SList* s) {
	PNode p = s->_pHead;
	PNode ptr = p->_pNext;
	while (p) {
		free(p);
		p = ptr;
		ptr = p->_pNext;
	}
	free(s);
}

int main (){
	
	system("pause");
	return 0;
}