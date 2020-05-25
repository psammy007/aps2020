import re
y=input()
r=re.split(",|\.",y)
for i in r:
    print(i)
