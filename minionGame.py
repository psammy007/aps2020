V=['A','E','I','O','U']
v=[]
c=[]
def minion_game(string):
    count=0
    count1=0
    l=len(string)
    for i in range(0,l):
        if string[i] in V:
            v.append(i)
        else:
            c.append(i)
    for i in v:
        count=count+l-i
    for i in c:
        count1=count1+l-i  
    if count1>count:
        print("Stuart",count1)
    elif count>count1:
        print("Kevin",count)
    else:
        print("Draw")
    #print(count,count1)
    


