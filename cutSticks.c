#include<stdio.h>
#include<stdlib.h>

main()
{
    int n,a[1000],i=0,count=1;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i++]);
    }
    int z=0;
    while(count!=0)
    {
        i=0;
        int small=99999;
        count=0;
        while(i<n)
        {
            if(small > a[i] && a[i]>0)
            {
                small=a[i];
            }
            if(a[i]>0)
                count++;
            
            i++;
        }
        if(count==0)
            exit(0);
       // printf("%d ",small);
        printf("%d\n",count);
        i=0;
        while(i<n)
        {
            a[i]=a[i]-small;
            //printf("%d",small);
            //printf("%d ",a[i]);
            i++;
        }
        //printf("\n");
    }
}
