#include<stdio.h>

main()
    
{
    int i,k=0,a[100000];
    scanf("%d",&i);
    while(k<i)
    {
        scanf("%d",&a[k]);
        k++;
    }
    
    int big=a[0],j=0;
    while(j<i)
    {
        if(big<a[j])
        {
            big=a[j];
        }
        j++;
    }
    int y=0,count=0;
    while(y<i)
    {
        if(a[y]==big)
        {
            count++;
        }
        y++;
    }
    printf("%d\n",count);
}

