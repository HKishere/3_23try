#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define MAX_SIZE 10

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
void SListInit(PSList s){
	assert(s);
	s->_pHead = NULL;//��ʼ��ʱһ��Ҫָ��null
	return;
}

// ������s���һ���ڵ�����ֵΪdata�Ľڵ� 
void SListPushBack(PSList s, SDataType data) {
	assert(s);
	PNode p = s->_pHead;
	if (p == NULL) {//Ϊ�˱������ָ��null��ָ��,Ҫ���ж��Ƿ�ָ��s->_head
		PNode newnode = (PNode)malloc(sizeof(Node));//malloc��ʱ��sizeof����ӵ�������node������node*,����ᷢ���ڴ�й¶
		assert(newnode);
		s->_pHead = newnode;
		newnode->_data = data;
		newnode->_pNext = NULL;
		return;
	}
	while (p->_pNext != NULL) {
		p = p->_pNext;
	}
	PNode newnode = (PNode)malloc(sizeof(Node));
	assert(newnode);
	p->_pNext = newnode;
	newnode -> _data = data;
	newnode -> _pNext = NULL;
	return;
}

// ɾ������s���һ���ڵ� 
void SListPopBack(PSList s) {
	assert(s);
	PNode p = s->_pHead;
	while (p->_pNext->_pNext != NULL) {
		p = p->_pNext;
	}
	free(p->_pNext);
	p->_pNext = NULL;
	return;
}

// ������s��һ���ڵ�ǰ����ֵΪdata�Ľڵ� 
void SListPushFront(PSList s, SDataType data) {
	assert(s);
	PNode newnode = (PNode)malloc(sizeof(Node));
	assert(newnode);
	newnode->_data = data;
	newnode->_pNext = s->_pHead;
	s->_pHead = newnode;
	return;
}

// ɾ������s�ĵ�һ���ڵ� 
void SListPopFront(PSList s) {
	assert(s);
	PNode p = s->_pHead;
	s->_pHead = p->_pNext;
	free(p);
}

// �������posλ�ú����ֵΪdata�Ľڵ� 
void SListInsert(PNode pos, SDataType data) {
	assert(pos);
	PNode newnode = (PNode)malloc(sizeof(Node));
	assert(newnode);
	newnode->_pNext = pos->_pNext;
	newnode->_data = data;
	pos->_pNext = newnode;
	return;
}

// ɾ������s��posλ�õĽڵ� 
void SListErase(PSList s, PNode pos){
	assert(s);
	assert(pos);
	PNode p = s->_pHead;
	while (p->_pNext != pos) {
		p = p->_pNext;
	}
	p->_pNext = pos->_pNext;
	free(pos);
	return;
}

// �������в���ֵΪdata�Ľڵ㣬�ҵ����ظýڵ�ĵ�ַ�����򷵻�NULL 
PNode SListFind(PSList s, SDataType data) {
	assert(s);
	PNode p = s->_pHead;
	do {
		if (p->_data == data){
			break;
		}
		p = p->_pNext;
	} while (p->_pNext != NULL);//do while��������whileһ��
	return p;
}
// ��ȡ��������Ч�ڵ�ĸ��� 
size_t SListSize(PSList s) {
	assert(s);
	size_t size = 0;
	PNode p = s->_pHead;
	while (p){
		++size;
		p = p->_pNext;
	}
	return size;
}

// ��������Ƿ�Ϊ�� 
int SListEmpty(PSList s) {
	assert(s);
	if (s->_pHead != NULL) {
		return 1;
	}
	return 0;
}
// ����������Ч�ڵ���� 
void SListClear(PSList s) {
	assert(s);
	PNode p = s->_pHead;
	while (p){
		p->_data = 0;
		p = p->_pNext;
	}
	return;
}

// �������� 
void SListDestroy(PSList s) {
	assert(s);
	PNode p = s->_pHead;
	PNode ptr = p;
	while (ptr) {
		p = ptr->_pNext;
		free(ptr);
		ptr = p;//��������ʱҲӦ��ע��������ָ��null��ָ��
	}
	free(s);
}

//��ӡ����
void SlistPrint(PSList p) {
	assert(p);
	PNode prt = p->_pHead;
	while (prt != NULL){
		printf("%u ", prt->_data);
		prt = prt->_pNext;
	}
	printf("\n");
	return;
}

//���Դ���
void testslist(PSList p) {
	assert(p);
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
	SListClear(p);
	SlistPrint(p);
	return;
}

int main (){
	PSList myslist = (PSList)malloc(sizeof(PSList));
	assert(myslist);
	testslist(myslist);
	SListDestroy(myslist);
	system("pause");
	return 0;
}