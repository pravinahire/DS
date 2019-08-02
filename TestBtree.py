
from BST import Node
from BST import insertNode
from BST import Display
from BST import deleteNode
t=None
t=insertNode(t,12)
t=insertNode(t,32)
t=insertNode(t,2)
t=insertNode(t,24)
t=insertNode(t,3)
t=insertNode(t,36)
t=insertNode(t,0)
Display(t)
t=deleteNode(t,12)
Display(t)
t=deleteNode(t,2)
Display(t)
t=deleteNode(t,0)
Display(t)
t=deleteNode(t,36)
Display(t)

