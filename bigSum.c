#include <stdio.h>

main()
{
    int n,i=0,j=0;
    scanf("%d",&n);
    long int a[100],s=0;
    while(i<n)
    {
        scanf("%ld",&a[i]);
        i++;
    }
    while(j<n)
    {
        s=s+a[j];
        j++;
    }
    printf("%ld",s);
    
}
