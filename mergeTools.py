count=0
def merge_the_tools(string, k):
    l=len(string)
    i=0
    list1=[]
    while i<=l-k:
        for j in range(i,i+k):
            if(string[j] in list1):
                count=1
            else:
                list1.append(string[j])
        w="".join(list1)
        print(w)
        del list1[0:]
        i=j+1



