n,mylist=int(input()),input().split(" ")
length=len(mylist)
mydict=dict()
for i in range(0,length):
    mydict[mylist[i]]=0
for i in range(0,length):
    mydict[mylist[i]]+=1

for i in range(0,length):
    if(mydict[mylist[i]]==1):
        print(mylist[i])
        break

