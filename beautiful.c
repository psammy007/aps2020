#include<stdio.h>

main()
{
    int n,d,a[10000],i=0,j,count=0,k;
    scanf("%d%d",&n,&d);
    //printf("n=%d,d=%d\n",n,d);
    while(i<n)
    {
        scanf("%d",&a[i]);
        //printf("%d\n",a[i]);
        i++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if((a[i]-a[j])==d || (a[j]-a[i])==d)
            {
                for(k=j+1;k<n;k++)
                {
                    if((a[j]-a[k])==d || (a[k]-a[j])==d)
                        count++;
                }
            }
        }
    }
    printf("%d",count);
}
