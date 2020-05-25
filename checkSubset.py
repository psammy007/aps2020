n=int(input())
while n:
    n=n-1
    j=int(input())
    seta=set((input().split()))
    #print(seta)
    k=int(input())
    setb=set((input().split()))
    #print(setb)
    if(len(seta-setb)==0):
        print('True')
    else:
        print("False")
