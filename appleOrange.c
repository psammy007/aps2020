#include<stdio.h>

main()
{
    int s,t,a,b,m,n,p[100000],q[100000],i=0,k=0,apple=0,orange=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    while(i<m)
    {
        scanf("%d",&p[i]);
        if((p[i]+a)>=s && (p[i]+a)<=t)
        {
            apple++;
        }
        i++;
    }
    while(k<n)
    {
        scanf("%d",&q[k]);
         if((q[k]+b)>=s && (q[k]+b)<=t)
        {
            orange++;
        }
        k++;
    }
    printf("%d\n%d",apple,orange);
}
