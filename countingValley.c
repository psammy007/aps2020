#include<stdio.h>

main()
{
    int n,u=0,d=0,i=0,v=0;
    char s[1000000],temp;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%c",&s[i]);
        i++;
    }
    i=1;
    while(i<=n)
    {
       temp=s[i];
         if(u==0 && d==0 && temp=='D')
        {
            v++;
        }
        if(temp=='U')
        {
            u++;
            d--;
        }
        else
        {
            u--;
            d++;
        }
       i++;
    }
    printf("%d",v);
}
