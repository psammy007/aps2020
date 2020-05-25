#include<stdio.h>

int main()
{
    int n,k,a[100000],b,sum=0,i=0;
    scanf("%d %d",&n,&k);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    scanf("%d",&b);
    i=0;
    while(i<n)
    {
        sum=sum+(a[i]);
        i++;
    }
    sum=(sum/2)-(a[k]/2);
    //printf("%d\n",sum);
    if(sum==b)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        printf("%d",b-sum);
    }
}
