#include<stdio.h>

main()
{
    int b,k,u,i=0;
    int a[2000],d[2000],c[4000000];
    scanf("%d%d%d",&b,&k,&u);
    while(i<k)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<u)
    {
        scanf("%d",&d[i]);
        i++;
    }
    int j=0,g=0;
    while(j<k)
    {
        int temp=a[j],sum,t=0;
        while(t<u)
        {
            sum=temp+d[t];
            //printf("%d\n",sum);
            if(sum<=b)
            {
                c[g]=sum;
                g++;
            }
            
            t++;
        }
        j++;
    }
    int big=c[0],y=0;
    while(y<=g)
    {
        if(big<c[y])
        {
            big=c[y];
        }
        y++;
    }
    if(g==0)
        big=-1;
    printf("%d\n",big);
}
