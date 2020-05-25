import datetime 
import calendar 
import sys

dic = {"Monday":4,"Tuesday":3,"Wednesday":2,"Thursday":1,"Friday":0,"Saturday":6,"Sunday":5}

dic2 = {"Monday":8,"Tuesday":9,"Wednesday":10,"Thursday":11,"Friday":12,"Saturday":13,"Sunday":7}

month_last = {1:31,2:28,3:31,4:30,5:31,6:30,7:31,8:31,9:30,10:31,11:30,12:31}

def isLeap(m):
	if(m%4==0):
		if(m%100==0):
			if(m%400==0):
				return True
			else:
				return False
		else:
			return True
	else:
		return False

def findLast(n,m):
	if(n==2):
		if(isLeap(m)):
			return month_last[n]+1
		else:
			return month_last[n]
	else:
		return month_last[n]

def findDay(date): 
	born = datetime.datetime.strptime(date, '%d %m %Y').weekday() 
	return (calendar.day_name[born]) 

#q = int(input())
q = sys.stdin.readline().split('\n')
q = int(q[0])
print(q,"1")
q = 2
for i in range(q):
	count = 0
	first = [int(x) for x in input().split(' ')]
	second = [int(x) for x in input().split(' ')]
	second[0]+=1
	if(second[0]==13):
		second[0] = 1
		second[1] += 1
	while True:
		day = findDay("1 "+str(first[0])+" "+str(first[1]))
		firstFriday = 1 + dic[day]
		lastDay = findLast(first[0],first[1])
		day = findDay(str(lastDay)+" "+str(first[0])+" "+str(first[1]))
		lastSecondSunday = lastDay - dic2[day]
		if(firstFriday+10>lastSecondSunday):
			count += 1
		first[0] += 1
		if(first[0]==13):
			first[0] = 1
			first[1] += 1
		if(first[0]==second[0] and first[1]==second[1]):
			break
	print(count)
