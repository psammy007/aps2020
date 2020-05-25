#include<stdio.h>

main()
{
    int d,i=0,count=0;
    scanf("%d",&d);
    int sum=2,rec=0,f=5;
    while(i<d)
    {
        sum=sum+(rec/2);
        rec=(f/2)*3;
        f=rec;
        i++;
    }
    printf("%d",sum);
    
}
