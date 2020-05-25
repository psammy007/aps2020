#include<stdio.h>

main()
{
    int n,i=0,a[1000],flag=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i++]);
    }
    int j=0,small=999999;
    while(j<n)
    {
        int temp=a[j],z;
        i=j+1;
        while(i<n)
        {
            if(temp==a[i])
            {
                z=i-j;
                if(z<small)
                {
                    small=z;
                }
                break;
            }
            i++;
        }
        j++;
    }
    if(small==999999)
        small=-1;
    printf("%d",small);
}
