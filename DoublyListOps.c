/* Singly linked list operations */

#include<stdio.h>
#include<stdlib.h>
#include "DoublyList.h"


Node * NewNode(int data) {
	Node *nw;
	nw=(Node *)malloc(sizeof(Node));
    nw->data=data;
	nw->next=NULL;
	nw->prev=NULL;
	return nw;
}

void Append(Node *head ,int data) {
		Node *t=head,*nw=NewNode(data);
		while(t->next != NULL)
	 	 t=t->next;
	    t->next=nw;
		nw->prev=t;
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
		t2->prev=NULL;
		t2->next=t1;
		t1->prev=t2;
		return t2;    // Head 
	}
	else{                          /* If  list has more than two elements */ 
		t3=t2->next;
		t1->next=NULL;
		while(t3->next != NULL){
			t2->next=t1;
			t1->prev=t2;
			t1=t2;
			t2=t3;
			t3=t2->next;
		}
		t2->next=t1;
		t1->prev=t2;
		t3->next=t2;
		t2->prev=t3;
		return t3;
	}
}

Node * InsertAtBegining(Node *head ,int data){
	Node *nw=NewNode(data);
	nw->next=head;
	head->prev=nw;
	return nw;
}

Node * InsertAtEnd(Node *head , int data){
	Node *t=head,*nw=NewNode(data);
	while(t->next != NULL)
		t=t->next;
	t->next=nw;
	nw->prev=t;
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
		nw->prev=t1;
		t1->next=nw;
		t2->prev=nw;
		return head;
	}
}




/*Given a doubly linked list, rotate the linked list counter-clockwise by P nodes. Here P is a given positive integer and is smaller than the count of nodes(N) in a linked list.

Input:
The first line of input contains an integer T denoting the no of test cases. For each test case, the first line of input contains two integers N and P denoting the number of nodes in Linked List and the number of nodes to be rotated respectively.

Output:
For each test case, output the final linked list after the P rotations in it.

Constraints:
1 <= T <= 100
2 <= N <= 100
1 <= P <= N

Example:
Input:
1
6 2
1 2 3 4 5 6

Output:
3 4 5 6 1 2

    */


Node * RotateListAnticlockwise(Node *head , int p){                    //Rotate List by p positions anticlockwise
	
	struct node  *TailList=head ,*t=head;
    int k=1;
    while(k<p){
        t=t->next;
        k++;
    }
	if(p<1)
		return head;
	if(head->next==NULL)
		return head;
	else {
    	head=t->next;
    	head->prev=NULL;
    	t->next=NULL;
    	struct node *Lnode=head;
    	while(Lnode->next!=NULL)
        	Lnode=Lnode->next;
    	Lnode->next=TailList;
    	TailList->prev=Lnode;
    	return head;
    }
}
	




