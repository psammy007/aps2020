movie = {'A':0, 'B':1, 'C':2, 'D':3}
time = {12:0,3:1,6:2,9:3}
combi = ["ABCD","ABDC","ADBC","ADCB","ACDB","ACBD","BACD","BADC","BDAC","BDCA","BCDA","BCAD","CABD","CADB","CDAB","CDBA","CBDA","CBAD","DABC","DACB","DCAB",
"DCBA","DBCA","DBAC"]

def findMax():
	for i in combi:
		print(movie[i[0]],movie[i[1]],movie[i[2]],movie[i[3]])

q = int(input())
findMax()
