#include<stdio.h>
#include<limits.h>

int a[10000000],b[10000000];

int median(int n,int min)
{
    int i,index = n/2,res = 0;
    for(i=0;i<n;i++)
        b[a[i]-min] += 1;
    for(i=0;i<20000;i++)
    {
        if(res+b[i]>index)
            return i;
        res += b[i];
    }
    return 0;
}

int main(){
    int n,i,min = INT_MAX,max = INT_MIN;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
            min = a[i];
    }
    printf("%d",median(n,min));

}

