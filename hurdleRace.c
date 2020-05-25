#include<stdio.h>

main()
{
    int n,h,a[1000],i=0,d=0,big,j=0;
    scanf("%d",&n);
    scanf("%d",&h);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    big=a[0];
    while(j<n)
    {
        if(big<a[j])
        {
            big=a[j];
        }
        j++;
    }
    if(h<big)
    {
        d=big-h;
    }
    printf("%d",d);
}
