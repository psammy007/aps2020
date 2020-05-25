#include<stdio.h>

void compareTriplets();
int a[3],i=0;
int b[3],c[3];

main()
{
    while(i<3)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
     while(i<3)
    {
        scanf("%d",&b[i]);
        i++;
    }
    
    compareTriplets();
    
}

void compareTriplets()
{
    int s=0,d=0,k=0;
    while(k<3)
    {
    if(a[k]>b[k])
        s++;
    else if(b[k]>a[k])
        d++;
        
        k++;
    }
    printf("%d %d",s,d);    
}


