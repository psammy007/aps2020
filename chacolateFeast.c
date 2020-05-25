#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,c,m,count;
        scanf("%d%d%d",&n,&c,&m);
        count=n/c;
        int f=count;
        while(f>=m)
        {
            count=count+(f/m);
            f=(f%m)+(f/m);
        }
        printf("%d\n",count);
    }
}
