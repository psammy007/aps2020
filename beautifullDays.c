#include<stdio.h>

main()
{
    int i,j,k,rev,n,rem,count=0,res;
    scanf("%d%d%d",&i,&j,&k);
    while(i<=j)
    {
        rev=0;
        n=i;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
       // printf("%d %d\n",i,rev);
        res=rev-i;
        if(res<0)
            res=res*(-1);
        if((res%k)==0)
            count++;
        i++;
    }    
    printf("%d",count);
}
