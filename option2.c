#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node{
	int num;
	struct Node* next;

}Node;

typedef struct Stack{
	struct Node* top;
	int count;
}Stack;

//init a stack from a stack pointer
void init(Stack* stack){
	stack->top=NULL;
	stack->count=0;
}

//push element

void push(Stack* stack,int val){
	Node* new=(Node*)malloc(sizeof(Node));

	new->num=val;
	new->next=stack->top;
	stack->top=new;
	stack->count++;
}

//pop element 
int pop(Stack* stack){
	if(stack->top==NULL){
		fprintf(stderr,"empty!\n");
		exit(1);
	}
	
	Node* temp=stack->top;
	stack->top=stack->top->next;
	int res=temp->num;
	free(temp);
	stack->count--;
	return res;
}	

int peek(Stack* stack){
	if (stack->top==NULL){
		fprintf(stderr,"empty!");
		exit(1);
	}

	return stack->top->num;
}

int size(Stack* stack){
	return stack->count;
}









