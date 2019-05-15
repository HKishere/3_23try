#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define  MAX_INIT_SIZE 10;

typedef int Datatype;

typedef struct Stack{
	Datatype* arr;
	int _size;
	int _capacity;
} Stack ,*PStack;

void InitStack(PStack s){
	s->_capacity = MAX_INIT_SIZE;
	s->arr = (Datatype*)malloc(sizeof(Datatype)*s->_capacity);
	s->_size = 0;
}
void StackPush(PStack ps,Datatype data){
	ps->arr[ps->_size] = data;
	++ps->_size;
	return;
}
void Stackpop(PStack ps) {
	--ps->_size;
	return;
}
int StackSize(PStack ps) {
	return ps->_size;
}
int StackEmpty(PStack ps) {
	if (ps->_size){
		return 0;
	}
	else {
		return 1;
	}
}
void StackDestroy(Stack* ps) {
	free(ps);
}
void PrintStack(PStack ps) {
	for (int i = 0; i < ps->_size; ++i) {
		printf("%u", ps->arr[i]);
	}
	return;
}

int main (){
	
	system("pause");
	return 0;
}