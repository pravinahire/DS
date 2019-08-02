# Implementation of Binary Tree

class Node:
    
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

def insertNode(root,data):
    if root is None:
        return Node(data)
    if root.left is None:
        root.left=Node(data)
    else:
        if root.right is None:
            root.right=Node(data)
        else:
            if root.left:
                insertNode(root.left,data)
            else:
                insertNode(root.right,data)
    return root

def DispTree(root):
    if root is not None:
        DispTree(root.left)
        print(root.data)
        DispTree(root.right)

if __name__=='__main__':
    
    r=insertNode(None,20)
    r=insertNode(r,30)
    r=insertNode(r,40)
    r=insertNode(r,50)
    r=insertNode(r,45)
    r=insertNode(r,23)
    DispTree(r)



