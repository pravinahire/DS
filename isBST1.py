# Program to check given tree is BST or not  

from queue import Queue
from queue import EnQueue
from queue import DeQueue
from queue import IsEmptyQueue
from BalancedBTreeCreate import BalancedBTreeCreate




def inOrderList(root,list):
    if root is not None:
        inOrderList(root.left , list)
        list.append(root.data)
        inOrderList(root.right , list)
    return list

def isBST(root):
    list=[]
    list=inOrderList(root,list)
    i=0
    j=1
    while i<(len(list)-1):
        if(list[i]>list[j]):
            return False
        else:
            i+=1
            j+=1
    return True

t1 = BalancedBTreeCreate([5,3,10,12,4,6,11])
t2 = BalancedBTreeCreate([5,3,10,0,4,6,11])
print(isBST(t1))
print(isBST(t2))


