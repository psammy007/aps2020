def count_substring(string, sub_string):
    count1=0
    l=len(string)
    k=len(sub_string)
    for i in range(0,l-k+1):
        a=string[i:i+k]
        a="".join(a)
        if a==sub_string:
            count1+=1
    return count1


