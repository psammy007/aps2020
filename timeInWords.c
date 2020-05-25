t=['one','two','three','four','five','six','seven','eight','nine','ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen','sventeen','eighteen','ninteen','twenty','twenty one','twenty two','twenty three','twenty four','twenty five','twenty six','twenty seven','twenty eight','twenty nine']
n=int(input())
m=int(input())
if n==12 and m>30 :
    n=1
if m==00:
    print("{0} o' clock".format(t[n-1]))
elif m==15:
    print("quarter past {0}".format(t[n-1]))
elif m==30:
    print("half past {0}".format(t[n-1]))
elif m==45:
    print("quarter to {0}".format(t[n]))
elif m==1:
     print("{0} minute past {1}".format(t[m-1],t[n-1]))
elif m==59:
    print("{0} minute to {1}".format(t[60-m-1],t[n]))
elif m<30:
    print("{0} minutes past {1}".format(t[m-1],t[n-1]))
elif m>30:
    print("{0} minutes to {1}".format(t[60-m-1],t[n]))
