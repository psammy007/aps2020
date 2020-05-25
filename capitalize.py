
import re
thislist=['p']
# Complete the solve function below.
def solve(s):
    n=[]
    l=len(s)
    n.insert(0,s[0].upper())
    for i in range(1,l):
        if s[i-1]==" ":
            n.insert(i,s[i].upper())
        else:
            n.insert(i,s[i])
    n="".join(n)
    return n


