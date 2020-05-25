n = []
n = input().split(' ')
n = [int(x) for x in n]
x = (n[0] * n[1]) % 9
if x==0:
    x = 9
print(x)

