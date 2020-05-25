# Enter your code here. Read input from STDIN. Print output to STDOUT
count=0
n,m=input().split()
y=input().split()
x=input().split()
a=set(x)
z=input().split()
b=set(z)
#print(y,a,b)
for i in y:
    if i in a:
        count+=1
    elif i in b:
        count-=1
print(count)


