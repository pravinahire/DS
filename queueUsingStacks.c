#include<stdio.h>
#include<stdlib.h>
struct stack {
	int top;
	int *a;
	int capacity;
};

typedef struct stack stack;


struct queue {
	stack *s1,*s2;
};

typedef struct queue Queue;

stack * createStack(int capacity) {
	stack *s=malloc(sizeof(stack ));
	s->capacity = capacity;
	s->top = -1;
	s->a=malloc(sizeof(int)*capacity);
	return s;
}

int isEmpty(stack *s){
		if(s->top == -1)
			return 1;
		else
			return 0;
}
int isFull(stack *s){
		if(s->top == s->capacity -1)
			return 1;
		else
			return 0;
}

void push(stack *s , int e){
	if(!isFull(s))
			s->a[++(s->top)]=e;
	else 
		printf("\n Stack is full");
}
int pop(stack *s){
	if(!isEmpty(s))
		return s->a[(s->top)--];
	else
		printf("\n Stack is empty");
}
void display(stack *s){
	if (isEmpty(s)){
		printf("\nEmpty");
	
	}
	else{
		while(!isEmpty(s))
			printf("%d",pop(s));
	}
}
// Implementation of Queue using Stack 
int isEmptyQueue(Queue *q){
	if(isEmpty(q->s1)&&isEmpty(q->s2))
		return 1;
	else 
		return 0;
}

void EnQueue(Queue *q,int data){
	while(!isEmpty(q->s1))
		push(q->s2,pop(q->s1));
	push(q->s1,data);
	while(!isEmpty(q->s2))
		push(q->s1,pop(q->s2));
}

int DeQueue(Queue *q){
	return pop(q->s1);
}

int main(){
	
	Queue *q;
	q=malloc(sizeof(Queue*));	
	q->s1=createStack(10);
	q->s2=createStack(10);
	//push(q->s1,1);
	//push(q->s1,5);
	/*display(s);	
	push(s,8);
	push(s,9);
	push(s,3);
	push(s,4);
	push(s,5);
	push(s,6);
	push(s,10);
	push(s,12);
	//pop(s);
	//pop(s);
	//pop(s);
	//push(s,10);*/
	EnQueue(q,4);
	EnQueue(q,2);
	EnQueue(q,6);
	printf("%d",DeQueue(q));
	printf("%d",DeQueue(q));
	//display(q->s1);
	
	return 0;
}



