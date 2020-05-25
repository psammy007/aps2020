n = int(input())
arr = []
for i in range(n):
    s = input()
    arr.append(s)
for i in sorted(arr, key=lambda x: (len(x),x)):
    print(i) 

