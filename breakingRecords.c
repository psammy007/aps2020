#include<stdio.h>

main()
    
{
    int n,i=0,j,k,count=0,c=0;
    scanf("%d",&n);
    unsigned long long int a[1000],big,small;
    while(i<n)
    {
        scanf("%lld",&a[i]);
        i++;
    }
    big=a[0];
    for(j=0;j<n;j++)
    {
        if(big<a[j])
        {
            big=a[j];
            count++;
        }
    }
    small=a[0];
    for(k=0;k<n;k++)
    {
        if(small>a[k])
        {
            small=a[k];
            c++;
        }
    }
   
        printf("%d %d",count,c);
}
