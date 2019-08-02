def is_operator(e):
    if e in ['^','+','-','*','/','%']:
        return True
    else:
        return False



def prefix_To_postfix(exp):
    stk=[]
    l=len(exp)-1
    while(l>=0):
        if(not(is_operator(exp[l]))):
                stk.append(exp[l])
        else:
            op1=stk.pop()
            op2=stk.pop()
            temp=op1+op2+exp[l]
            stk.append(temp)
        l-=1
    print(stk.pop())
        

        

exp=input()
prefix_To_postfix(exp)
