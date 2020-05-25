#include<stdio.h>
#include<string.h>

int main()
{
    int q,l,i,res;
    char str[100000];
    scanf("%d",&q);
    while(q)
    {
        res = 0;
        scanf("%s",str);
        l = strlen(str);
        for(i=1;i<l;i++)
            if(str[i-1]==str[i])
                res++;
        printf("%d\n",res);
        q--;
    }
}

