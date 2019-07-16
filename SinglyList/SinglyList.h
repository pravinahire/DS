
struct node {
	struct node *next;
	int data;
};
 
typedef struct node Node;
 
extern Node * NewNode(int);

extern void Append(Node *,int);

extern Node * CreatList();

extern void Display(Node *);

extern Node * ReverseList(Node *);

extern Node * InsertAtBegining(Node *,int);

extern Node * InsertAtEnd(Node *,int);

extern Node * InsertAtPosition(Node *,int,int);

