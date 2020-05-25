#include<stdio.h>

int isFactorof(int j,int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(j%a[i]!=0)
            return 0;
    }
    return 1;
}

int isFactorFor(int j,int b[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(b[i]%j!=0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,m,i,max=0,min=100,c=0,x,y;
    int a[100],b[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
            max = a[i];
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        if(min>b[i])
            min = b[i];
    }
    for(i=max;i<=min;i++)
    {
        x = isFactorof(i,a,n);
        if(x==1)
        {
            y = isFactorFor(i,b,m);
            if(y==1)
                c++;
        }
    }
    printf("%d\n",c);
}

