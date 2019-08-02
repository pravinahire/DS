# Program for Iterative Postorder traversal of binary tree

from stack import Stack
from stack import push
from stack import spop
from stack import IsEmptyStack
from BinaryTree import Node
from BinaryTree import insertNode
from BinaryTree import DispTree

r=insertNode(None,20)
r=insertNode(r,30)
r=insertNode(r,40)
r=insertNode(r,50)
r=insertNode(r,45)
r=insertNode(r,23)
DispTree(r)
 
print('Postorder traversal of give Binary Tree is')
 
def iterativePostorderBtree(r):
 
    s1=Stack()
    s2=Stack()
    push(s1,r)
    while not IsEmptyStack(s1):
        t=spop(s1)
        push(s2,t)
        if t.left is not None:
            push(s1,t.left)
        if t.right is not None:
            push(s2,t.right)
    while not IsEmptyStack(s2):
        print(spop(s2).data)


iterativePostorderBtree(r)



