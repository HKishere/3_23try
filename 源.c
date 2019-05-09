#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
#define MAX_SIZE 100

typedef struct SeqList {
	DataType* _arry;//svae the data
	int _capacity; //size of the list
	int _size;//the num of data
}Seqlist, *Pseq;

void SeqlistInit(Pseq ps, int capacity) {
	ps->_arry = (DataType*)malloc(sizeof(DataType)*capacity);
	if (NULL == ps->_arry){
		assert(0);
		return;
	}
	ps->_capacity = capacity;
	ps->_size = 0;

}

void SeqlistDestory(Pseq ps) {
	if (ps->_arry){
		free(ps->_arry);
		ps->_arry = NULL;
		ps->_capacity = 0;
		ps->_size = 0;
	}
}

void SeqListPushBack(Pseq ps, DataType data) {
	assert(ps);
	ps->_arry[ps->_size] = data;
	ps-> _size++;
}

int SeqListEmpty(Pseq ps) {//要写在所有调用了这个函数的函数之前,否则会报错
	assert(ps);
	return (0 == ps->_size);
}

void SeqListPopBack(Pseq ps) {
	assert(ps);
	if (SeqListEmpty(ps)) {
		return;
	}
	ps->_size--;
}

void SeqListPushFront(Pseq ps, DataType data) {
	assert(ps);
	for (int i = ps->_size - 1; i >= 0; --i) {
		ps->_arry[i + 1] = ps->_arry[i];
	}
	ps->_arry[0] = data;
	++ps->_size;
}

void SeqListPopFront(Pseq ps) {
	if (SeqListEmpty(ps)) {
		return;
	}
	for (int i = 1; i <= ps->_size - 1; ++i) {
		ps->_arry[i - 1] = ps->_arry[i];
	}
	ps->_size--;
}

void SeqlistInsert(Pseq ps, int pos, DataType data) {
	assert(ps);
	if (pos<0 || pos>ps->_size) {
		return;
	}
	for (int i = ps->_size - 1; i >= pos; --i) {
		ps->_arry[i + 1] = ps->_arry[i];
	}
	ps->_arry[pos] = data;
	ps->_size++;
}

void SeqListErase(Pseq ps, int pos) {
	assert(ps);
	if (pos < 0 || pos >= ps->_size) {
		return;
	}
	for (int i = pos + 1; i < ps->_size; ++i) {
		ps->_arry[i - 1] = ps->_arry[i];
	}
	ps->_size--;
}

int SeqListSize(Pseq ps) {
	assert(ps);
	printf("顺序表共 %d 个有效元素\n", ps->_size);
	return ps->_size;
}

int SeqListCapacity(Pseq ps) {
	assert(ps);
	printf("顺序表的容量大小为:%d\n", ps->_capacity);
	return ps->_capacity;
}

void SeqListClear(Pseq ps) {//将顺序表的所有元素清零
	assert(ps);
	for (int i = 0; i < ps->_size; ++i) {
		ps->_arry[i] = 0;
	}
	return ;
}

void SeqlistRemove(Pseq ps,int find) {
	int i;
	for (i = 0; i < ps->_size; ++i) {
		if (ps->_arry[i]==find){
			SeqListErase(ps, i);
			break;
		}
	}
	if (i == ps->_size) {
		printf("未寻获 %d\n", find);
		return;
	}
}

void SeqListPrint(Pseq ps) {
	for (int i = 0; i < ps->_size; ++i) {
		printf("%d ", ps->_arry[i]);
	}
	printf("\n");
}

int main (){
	Seqlist s;
	SeqlistInit(&s, 10);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListPushFront(&s, 0);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListSize(&s);
	SeqListCapacity(&s);
	SeqlistRemove(&s, 3);
	SeqListPrint(&s);

	system("pause");
	return 0;
}