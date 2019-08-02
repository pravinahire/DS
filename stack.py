# Implementation of stack  

class Stack:
    def __init__(self):
        self.stack=[]
    
def push(s,data):
    s.stack.append(data)

def spop(s):
    if len(s.stack)>0:
        return s.stack.pop()
    else:
        print("stack is empty")

def IsEmptyStack(s):
    if len(s.stack) is 0:
        return True
    else:
        return False

def DispStack(s):
    print(s.stack)

if __name__=='__main__':

    s=Stack()
    push(s,3)
    push(s,6)
    DispStack(s)
    t=spop(s)
    print(t)
    spop(s)
    print(IsEmptyStack(s))


