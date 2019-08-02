# Implementation of balanced  binary tree
from queue import Queue
from queue import EnQueue
from queue import DeQueue
from queue import DispQueue
from queue import IsEmptyQueue

class Node:
    
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None



def BalancedBTreeCreate(tree):
    flag=0
    q=Queue()
    t=Node(tree[0])
    root=t
    for data in tree[1:]:
        if root.left is None:
            root.left=Node(data)
            flag+=1
            EnQueue(q,root.left)
        else:
            if root.right is None:
                root.right=Node(data)
                flag+=1
                EnQueue(q,root.right)
        if flag is 2:
            flag=0
            root=DeQueue(q)
    return t


def DispTree(root):
    if root is not None:
        DispTree(root.left)
        print(root.data)
        DispTree(root.right)

if __name__=='__main__':
    
    tree=BalancedBTreeCreate([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15])
    DispTree(tree)



