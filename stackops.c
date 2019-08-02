#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
	int top;
	char *a;
	int capacity;
};

typedef struct stack stack;

stack * createStack(int capacity) {
	stack *s=malloc(sizeof(stack ));
	s->capacity = capacity;
	s->top = -1;
	s->a=malloc(sizeof(char)*capacity);
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

void push(stack *s , char e){
	if(!isFull(s))
			s->a[++(s->top)]=e;
	else 
		printf("\n Stack is full");
}
char pop(stack *s){
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

int precedence(char c){
	if(c=='^')
		return 3;
	else
		if(c=='%'|| c=='*' || c='/')
			return 2;
	else 
		if(c=='+' || c=='-')
			return 1;
	else 
		return -1;
}

void infixToPostfix(char ex){
	char s[30];
	stack *st=createStack(30);
	int l=strlen(ex),i,j=0;
	for(i=0;i<l;i++){
		if((ex[i]>='a' && ex[i]<='z')||(ex[i]>='a' && ex[i]<='z'))
			s[j++]=ex[i];
		else if(ex[i]=='(')
				push(st,'(');
		else if(ex[i]==')'){
			 while(!(isEmpty(st)) && ex[i]!='('){
			 	char c=pop(st);
			 	s[j++]=c;
			 }
			 char c=pop(st);
			 }
		else {
			
			while(!(isEmpty(st)) && (precedence(ex[i])<= precedence(st->a[st->top]))){
				char c=pop(st);
				s[j++]=c;
			}
			push(st,ex[i]);
		}	
	}
	while(!isEmpty(st)){
		char c=pop(st);
		s[j++]=c;
	}	
	s[j]='\0';
	int ln=strlen(s),k=0;	
	for(k;k<ln;k++)
		printf("%c",s[k]);
}


int main(){
	 
	 char exp[30];
	 printf("Enter string: ");
	 scanf("%s",exp);
	 infixToPostfix(exp);
     return 0;
}



