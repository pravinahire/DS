# Implementation of queue

class Queue:
    
    def __init__(self):
        self.queue=[]

def EnQueue(q,data):
    q.queue.insert(0,data)
    
def DeQueue(q):
        if len(q.queue)>0:
            return q.queue.pop()
        else:
            print('Queue is empty')

def IsEmptyQueue(q):
    if len(q.queue) is 0:
        return True
    else:
        False

def DispQueue(q):
    print(q.queue)

if __name__=='__main__':
    q=Queue()
    EnQueue(q,2)
    DispQueue(q)
    t=DeQueue(q)
    print(t)
    DispQueue(q)
