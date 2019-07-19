/* Singly linked list operations */

#include<stdio.h>
#include<stdlib.h>
#include "SinglyList.h"


Node * NewNode(int data) {
	
	Node *nw;
	nw=(Node *)malloc(sizeof(Node));
    nw->data=data;
	nw->next=NULL;	
	return nw;
}

void Append(Node *head ,int data) {
		
		Node *t=head;
		while(t->next != NULL)
	 	 t=t->next;
	    t->next=NewNode(data);
}

Node * CreatList() {
	
	int n,i;
	Node *head;
	printf("\n Total elements : ");
	scanf("%d",&n);
	if(n<1)
		head=NULL;
	else {
		printf("\n Enter elements ");
		for(i=0;i<n;i++){
			int data;
			scanf("%d",&data);
			if(i==0)
				head = NewNode(data);
			else
				Append(head,data);
		}
	return head;
	}
}

void Display(Node *head){
	
	Node *t=head;
	if(t==NULL)
		printf("\n List is Empty");
	while(t != NULL){
		printf("%d->",t->data);
		t=t->next;
	}
}
	
Node * ReverseList(Node *head){
	
	Node *t1=head,*t2,*t3;
	t2=t1->next;
	if(head==NULL)                       /* If list is empty */
		return head;
	else if(t1->next == NULL)            /* If list has only one element*/
			return head;
	else if(t2->next == NULL){      /* If  list has two elements */
		t1->next=NULL;
		t2->next=t1;
		head=t2;
		return head;
	}
	else{                          /* If  list has more than two elements */ 
		t3=t2->next;
		t1->next=NULL;
		while(t3->next != NULL){
			t2->next=t1;
			t1=t2;
			t2=t3;
			t3=t2->next;
		}
		t2->next=t1;
		t3->next=t2;
		head=t3;
		return head;
	}
}

Node * InsertAtBegining(Node *head ,int data){
	
	Node *nw=NewNode(data);
	nw->next=head;
	return nw;
}

Node * InsertAtEnd(Node *head , int data){
	
	Node *t=head;
	while(t->next != NULL)
		t=t->next;
	t->next=NewNode(data);
	return head;
}

Node * InsertAtPosition(Node *head , int pos , int data){
	
	Node *t1=head,*t2 , *nw=NewNode(data);
	int k=1;
	t2=t1->next;
	if(pos==1)
		return InsertAtBegining(head,data);
	else{
		while(k<(pos-1)){
			t1=t1->next;
			t2=t2->next;
			k++;
		}
		nw->next=t2;
		t1->next=nw;
		return head;
	}
}
	
Node * MoveZerosToFront(Node *head){
	
	Node *t1=head , *t2 , *t3 , *t; 
	while((t1->data) == 0)
		t1=t1->next;
	t2=t1->next;
	t3=t2->next;
	while(t3 != NULL){
		if(t2->data != 0){
			t1=t2;
			t2=t3;
			t3=t2->next;
		}
		else {
			t=t2;
			while((t2->next->data ==0)&&(t2->next->next !=NULL))
				t2=t2->next;
			t3=t2->next;
			t1->next=t3;
			t2->next=head;
			head=t;
			if(t3->next!=NULL){
				t1=t3;
				t2=t1->next;
				t3=t2->next;
			}
			else{
				t2=t1->next;
				t3=t3->next;
			}
		}
		if(t3==NULL){
			if(t2->data ==0){
				t2->next=head;
				head=t2;
				t1->next=NULL;
			}
		}
	} 
				

	return head;
}


// This function should delete node from linked list without using head pointer. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
Node *  deleteNode(Node *head , Node *node){
    
    Node *t=node , *t1 ,*Temp;
    t1=t->next;
    while(t->next->next !=NULL){
        Temp->data=t->data;
        t->data=t1->data;
        t1->data=Temp->data;
        t=t->next;
        t1=t1->next;
    }
    Temp->data=t->data;
    t->data=t1->data;
    t1->data=Temp->data;
    t->next=NULL;
    free(t1);
    return head;
}
