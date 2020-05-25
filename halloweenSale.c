#include<stdio.h>
#include<stdlib.h>

main()
{
    int p,d,m,s;
    scanf("%d%d%d%d",&p,&d,&m,&s);
    int sum=p,count=1,temp=p;
    if(p>s)
    {
        printf("0");
        exit(0);
    }
    while(temp-d>=m && sum<=s)
    {
        //printf("%d ",sum); 
        sum=sum+(temp-d);
        temp=temp-d;
        if((temp-d)<=(s-sum))
           count++;
    }
    //printf("%d,%d\n",sum,temp-m);
    while((sum+m)<=s)
    {
        sum=sum+(m);
        count++;
        //printf("%d\n",count);
    }
    printf("%d",count);
}
