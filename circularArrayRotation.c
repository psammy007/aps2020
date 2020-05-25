#include<stdio.h>
#include<stdlib.h>

void reverse(int a[],int n,int m)
{
    int temp;
    while(n<m)
    {
        temp=a[n];
        a[n]=a[m];
        a[m]=temp;
        n++;
        m--;
    }
}

int main()
{
    int n,k,q,i,a[100000],b[500];
    scanf("%d%d%d",&n,&k,&q);
    k=k%n;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<q;i++)
    scanf("%d",&b[i]);
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
    reverse(a,0,n-1);
    for(i=0;i<q;i++)
    printf("%d\n",a[b[i]]);
}


