#Program for sorting stack using stack

def sortStack(s):
    ts=[]
    while(not(s==[])):
            e=s.pop()
            while(not(ts==[]) and e<ts[-1]):
                s.append(ts.pop())
            ts.append(e)
    print(ts)



stack=input()
l=stack.split()
l1=[]
for i in l:
    l1.append(int(i))
sortStack(l1)
                

