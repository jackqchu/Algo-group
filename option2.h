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


void push(Stack* stack,int val);
int pop(Stack* stack);
int peek(Stack* stack);
int size(Stack* stack);
void init(Stack* stack);
