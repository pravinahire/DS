from BST import Node
from BST import insertNode
from BST import Display




def getHight(root):
    if root is None:
        return 0
    else:
        return 1+max(getHight(root.left) , getHight(root.right))




def isAvl(root):
    if root:
        h=abs(getHight(root.left)-getHight(root.right))
        if h>1:
            return False
        else:
            isAvl(root.left)
            isAvl(root.right)
            return True

t=None
t=insertNode(t,5)
t=insertNode(t,3)
t=insertNode(t,10)
t=insertNode(t,2)
t=insertNode(t,4)
t=insertNode(t,0)
t=insertNode(t,1)
t=insertNode(t,-1)
#t=insertNode(t,-2)
t=insertNode(t,6)
t=insertNode(t,11)
print(isAvl(t))



