#include<stdio.h>

main()
{
    int n,k,i=0,a[30],e=100;
    scanf("%d%d",&n,&k);
    while(i<n)
    {
        scanf("%d",&a[i++]);
    }
    int count=1;
    i=0;
    while(count!=0 || i!=0)
    {
        i=(i+k)%n;
       
        if(a[i]==1)
        {
            e=e-3;
           // printf("%d %d\n",i,e);
        }
        else
        {
            e=e-1;
            //printf("%d %d\n",i,e);
        }
          if(i==0)
        {
            count=0;
             break;
        }
       
    }
    printf("%d",e);
}
