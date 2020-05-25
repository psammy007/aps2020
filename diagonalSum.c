#include<stdio.h>
int a[100][100];
main()
{
  int n,r,c,d=0,od=0,s=0,sum=0,t=0;
    scanf("%d",&n);
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    while(d<n)
    {
        s=s+a[d][d];
        d++;
    }
    int g=0,h=n-1;
    while(od<n)
    {
        sum=sum+a[g][h];
        h--;
        g++;
        od++;
    }
    t=sum-s;
    if(t<0)
    {
        t=t*(-1);
    }
    printf("%d",t);
}
