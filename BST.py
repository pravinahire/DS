# Implementation of Binary Tree

class Node:
    
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

def insertNode(root,data):
    if root is None:
        return Node(data)
    if data<root.data:
        root.left=insertNode(root.left,data)
    else:
        root.right=insertNode(root.right,data)
    return root

def Display(root):
    if root is not None:
        Display(root.left)
        print(root.data)
        Display(root.right)

def minValueNode( node): 
    current = node 
    while(current.left is not None): 
        current = current.left  
    return current  
  
def deleteNode(root, data): 
    if root is None: 
        return root  
    if data < root.data: 
        root.left = deleteNode(root.left, data) 
  
    elif(data > root.data): 
        root.right = deleteNode(root.right, data) 
    else: 
        if root.left is None : 
            temp = root.right  
            root = None 
            return temp  
              
        elif root.right is None : 
            temp = root.left  
            root = None
            return temp 
  
        temp = minValueNode(root.right) 
  
        root.data = temp.data
  
        root.right = deleteNode(root.right , temp.data) 
    return root  


