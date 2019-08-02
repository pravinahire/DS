def is_operator(e):
    if e in ['^','+','-','*','/','%']:
        return True
    else:
        return False



def postfix_To_prefix(exp):
    stk=[]
    l=len(exp)
    i=0
    while(i<l):
        if(not(is_operator(exp[i]))):
                stk.append(exp[i])
        else:
            op2=stk.pop()
            op1=stk.pop()
            temp=exp[i]+op1+op2
            stk.append(temp)
        i+=1
    print(stk.pop())
    #print(stk.pop())
       

        

exp=input()
postfix_To_prefix(exp)
