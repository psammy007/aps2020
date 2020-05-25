def findLength(a,b):
	return ((a*a)+(b*b))


def find(a,b,p,q,r):
	count = 0
	for i in range(r):
		s1 = a[i]
		for j in range(r,p):
			s2 = a[j]
			l1 = (s1-s2) * (s1-s2)
			for k in range(q):
				s3 = b[k]
				l2 = findLength(s1,s3)
				l3 = findLength(s2,s3)
				if ((l1 == l2+l3) or (l2 == l1+l3) or (l3==l1+l2)):
					count+=1
	return count

q = int(input())
while(q):
	t = [int(x) for x in input().split(' ')]
	x = [int(n) for n in input().split(' ')]
	y = [int(m) for m in input().split(' ')]
	x.sort()
	y.sort()
	for i in range(t[0]):
		if(x[i]>0):
			xm = i
			break
	for i in range(t[1]):
		if(y[i]>0):
			ym = i
			break
	c = find(x,y,t[0],t[1],xm)
	d = find(y,x,t[1],t[0],ym)
	print(c+d)
	q-=1 
