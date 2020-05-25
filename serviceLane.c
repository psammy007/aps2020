#include<stdio.h>

main()
{
    int n,k,i=0,a[100000],z=0,in,ot;
    scanf("%d",&n);
    scanf("%d",&k);
    while(i<n)
    {
        scanf("%d",&a[i++]);
    }
    while(z<k)
    {
        int small=999999;
        scanf("%d %d",&in,&ot);
        while(in<=ot)
        {
            if(small>a[in])
            {
                small=a[in];
            }
            in++;
        }
        printf("%d\n",small);
        z++;
    }
}
