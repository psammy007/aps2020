#include<stdio.h>

int search(int v,int a[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[i]==v)
            return i;
    }
    return 0;
}

int main()
{
    int n,i,t,a[50];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        t = search(i,a,n);
        t = search(t,a,n);
        printf("%d\n",t);
    }   
}

