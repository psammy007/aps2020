#include <stdio.h>

int main()
{
    int n,i=0,count=0,k=0,z;
    int a[200];
    scanf("%d",&n);
    scanf("%d",&z);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    while(k<n)
    {
        int f=k;
        int t=k+1;
        while(t<n)
        {
            int first=a[k];
            int next=a[t];
            if((first+next)%z==0)
                count++;
            t++;
        }
        k++;
    }
    printf("%d",count);
}


