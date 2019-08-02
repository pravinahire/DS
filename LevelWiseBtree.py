from queue import Queue
from queue import EnQueue
from queue import DeQueue
from queue import DispQueue
from queue import IsEmptyQueue
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

print('levelwise Tree')

def LevelWiseBtree(r):

    q=Queue()
    EnQueue(q,r)
    while not IsEmptyQueue(q):
        t=DeQueue(q)
        print(t.data)
        if t.left is not None:
            EnQueue(q,t.left)
        if t.right is not None:
            EnQueue(q,t.right)

LevelWiseBtree(r)

