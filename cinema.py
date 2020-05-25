movie = {'A':0, 'B':1, 'C':2, 'D':3}
time = {12:0,3:1,6:2,9:3}
combi = ["ABCD","ABDC","ADBC","ADCB","ACDB","ACBD","BACD","BADC","BDAC","BDCA","BCDA","BCAD","CABD","CADB","CDAB","CDBA","CBDA","CBAD","DABC","DACB","DCAB",
"DCBA","DBCA","DBAC"]

def findMax(a):
	f_max = 0;
	for i in combi:
		summ = [a[movie[i[0]]][0],a[movie[i[1]]][1],a[movie[i[2]]][2],a[movie[i[3]]][3]]
		summ.sort()
		pr = (summ[0]*25)+(summ[1]*50)+(summ[2]*75)+(summ[3]*100)
		if(f_max<pr):
			f_max = pr
	return f_max
	
			
			
q = int(input())
pr = [100,75,50,25]
final_sum=0
for i in range(q):
	summ=0
	matrix = [[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]
	n = int(input())
	for j in range(n):
		req = input().split(' ')
		req[1] = int(req[1])
		matrix[movie[req[0]]][time[req[1]]] += 1
	summ = findMax(matrix)
	g = 0
	for i in range(4):
		if(matrix[i][0]==matrix[i][1]==matrix[i][2]==matrix[i][3]==0):
			g+=1
	summ = summ - (g * 100)
	final_sum +=summ
	print(summ)
print(final_sum)
		
		 
		
