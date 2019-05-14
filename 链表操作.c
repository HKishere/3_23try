#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int SDataType; 

// ��������Ľڵ� 
typedef struct SListNode 
{ 
	SDataType _data;
	struct SListNode* _pNext;
}Node, *PNode;

// ����Ľṹ����һ��ָ��ָ�������һ���ڵ�
typedef struct SList
{
	PNode _pHead; // ָ�������еĵ�һ���ڵ� 
}SList, *PSList;

// ����ĳ�ʼ�� 
void SListInit(SList* s){
	s->_pHead = (PNode)malloc(sizeof (PSList));
	return;
}

// ������s���һ���ڵ�����ֵΪdata�Ľڵ� 
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

// ɾ������s���һ���ڵ� 
void SListPopBack(SList* s) {
	PNode p = s->_pHead;
	while (p->_pNext->_pNext) {
		p = p->_pNext;
	}
	free(p->_pNext);
	p->_pNext = NULL;
	return;
}

// ������s��һ���ڵ�ǰ����ֵΪdata�Ľڵ� 
void SListPushFront(SList* s, SDataType data) {
	PNode newnode = (PNode)malloc(sizeof(PNode));
	newnode->_data = data;
	newnode->_pNext = s->_pHead;
	s->_pHead = newnode;
	return;
}

// ɾ������s�ĵ�һ���ڵ� 
void SListPopFront(SList* s) {
	PNode p = s->_pHead;
	s->_pHead = p->_pNext;
	free(p);
}

// �������posλ�ú����ֵΪdata�Ľڵ� 
void SListInsert(PNode pos, SDataType data) {
	PNode newnode = (PNode)malloc(sizeof(Node));
	newnode->_pNext = pos->_pNext;
	newnode->_data = data;
	pos->_pNext = newnode;
}

// ɾ������s��posλ�õĽڵ� 
void SListErase(SList* s, PNode pos){
	PNode p = (PNode)malloc(sizeof(Node));
	while (p->_pNext != pos) {
		p = p->_pNext;
	}
	p->_pNext = pos->_pNext;
	free(pos);
	return;
}

// �������в���ֵΪdata�Ľڵ㣬�ҵ����ظýڵ�ĵ�ַ�����򷵻�NULL 
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
// ��ȡ��������Ч�ڵ�ĸ��� 
size_t SListSize(SList* s) {
	size_t size = 0;
	PNode p = s->_pHead;
	while (p){
		++size;
		p = p->_pNext;
	}
	return size;
}

// ��������Ƿ�Ϊ�� 
int SListEmpty(SList* s) {
	if (s->_pHead != NULL) {
		return 1;
	}
	return 0;
}
// ����������Ч�ڵ���� 
void SListClear(SList* s) {
	PNode p = s->_pHead;
	while (p){
		p->_data = 0;
		p = p->_pNext;
	}
	return;
}

// �������� 
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