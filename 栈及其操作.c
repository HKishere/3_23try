#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define  MAX_INIT_SIZE 10;

typedef int Datatype;

typedef struct Stack{
	Datatype* arr;
	int _size;
	int _capacity;
} Stack ,*PStack;

void InitStack(PStack s){
	assert(s);
	s->_capacity = MAX_INIT_SIZE;
	s->arr = (Datatype*)malloc(sizeof(Datatype)*s->_capacity);
	s->_size = 0;
}
void StackPush(PStack ps,Datatype data){
	assert(ps);
	ps->arr[ps->_size] = data;
	++ps->_size;
	return;
}
void Stackpop(PStack ps) {
	assert(ps);
	--ps->_size;
	return;
}
int StackSize(PStack ps) {
	assert(ps);
	return ps->_size;
}
int StackEmpty(PStack ps) {
	assert(ps);
	if (ps->_size){
		return 0;
	}
	else {
		return 1;
	}
}
void StackDestroy(Stack* ps) {
	assert(ps);
	free(ps);
}
void PrintStack(PStack ps) {
	assert(ps);
	for (int i = 0; i < ps->_size; ++i) {
		printf("%u ", ps->arr[i]);
	}
	printf("\n");
	return;
}

int main (){
	PStack stacks1=(PStack)malloc(sizeof(Stack));
	InitStack(stacks1);
	StackPush(stacks1, 1);
	StackPush(stacks1, 2);
	StackPush(stacks1, 3);
	StackPush(stacks1, 4);
	StackPush(stacks1, 5);
	PrintStack(stacks1);
	printf("size of stack:%d\n", StackSize(stacks1));
	Stackpop(stacks1);
	StackPush(stacks1, 6);
	PrintStack(stacks1);
	system("pause");
	return 0;
}