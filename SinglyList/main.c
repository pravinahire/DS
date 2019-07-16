#include<stdio.h>
#include<stdlib.h>
#include "SinglyList.h"
int main() {
     Node *List=CreatList(),*NewList;
     Display(List);
     printf("\n");
     NewList = ReverseList(List);
     Display(NewList);
     printf("\n");
     NewList = InsertAtBegining(NewList, 8);
     Display(NewList);
     printf("\n");
     NewList = InsertAtEnd(NewList , 9);
     Display(NewList);
     printf("\n");
     NewList = InsertAtPosition(NewList,4,10);
     Display(NewList);
     printf("\n");
     return 0;
}


