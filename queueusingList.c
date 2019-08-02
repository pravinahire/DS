
#include<stdio.h>
#include<stdlib.h>

struct queue{
	int data;
	struct queue *next;
};

typedef struct queue Queue;

int isEmptyQueue(Queue *head){

		return (head==NULL); 
}

Queue * EnQueue(Queue *head,int data) {
	
	Queue *nw,*t=head;
	nw=(Queue *)malloc(sizeof(Queue));
	if(!nw)
		printf("Error");
	else{
    	nw->data=data;
		nw->next=NULL;
		if(isEmptyQueue(head))
			head=nw;
		else{
			while(t->next!=NULL)
				t=t->next;
			t->next=nw;
		}	
		return head;
	}
}

Queue * DeQueue(Queue *head) {
		
		Queue *t=head;
		head=t->next;
		free(t);
		return head;
}


void Display(Queue *head){
	
	Queue *t=head;
	if(t==NULL)
		printf("\n Queue is Empty");
	while(t != NULL){
		printf("%d->",t->data);
		t=t->next;
	}
	printf("\n");
}

int main(){
	
	Queue *q;
	q=EnQueue(q,1);
	q=DeQueue(q);
	q=EnQueue(q,1);
	q=EnQueue(q,2);
	q=EnQueue(q,4);
	q=EnQueue(q,5);
	Display(q);
	q=DeQueue(q);
	Display(q);
	q=DeQueue(q);
	Display(q);
	q=DeQueue(q);
	Display(q);
	q=DeQueue(q);
	Display(q);
	return 0;
}
