#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1918)
    printf("26.09.%d",n);
    else if(n<1918 && n>=1700)
    {
        if(n%4==0)
        printf("12.09.%d",n);
        else
        printf("13.09.%d",n);
    }
    else if(n<=2700 && n>1918)
    {
        int t;
        if(n%400==0)
        t=1;
        else if(n%100==0)
        t=0;
        else if(n%4==0)
        t=1;
        else
        t=0;

        if(t==1)
        printf("12.09.%d",n);
        else
        printf("13.09.%d",n);
    }
}

