#include<stdio.h>

int main()
{
    int n,i=0,a[100],count=0,flag=0,o=0,j=0,g,next,b[100],h=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    int temp;
    while(j<n)
    {
        temp=a[j];
        next=temp+1;
        g=0,count=0;
        while(g<n)
        {
            if(a[g]==temp || a[g]==next )
            {
                count++;
            }
            g++;
        }
        b[h]=count;
        h++;
        j++;
    }
    int t=0;
    int big=b[0];
    while(t<n)
    {
        if(b[t]>big)
            big=b[t];
        //printf("%d\n",b[t]);
        t++;
    }
    printf("%d",big);
}
