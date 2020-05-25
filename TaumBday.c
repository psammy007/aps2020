#include<stdio.h>

main()
{
    int q,i;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        long int w,b,wc,bc,cost,z;
        scanf("%ld%ld",&b,&w);
        scanf("%ld%ld%ld",&bc,&wc,&z);
        if(bc==wc)
        {
            cost=(b*bc)+(w*wc);
            printf("%ld\n",cost);
        }
        else if(wc<bc)
        {
            if(wc+z<bc)
            {
                cost=(wc*w)+(b*(wc+z));
                printf("%ld\n",cost);
            }
            else
            {
                cost=(b*bc)+(w*wc);
                printf("%ld\n",cost);
            }
        }
        else
        {
            if(bc+z<wc)
            {
                cost=(b*bc)+(w*(bc+z));
                 printf("%ld\n",cost);
            }
            else
            {
                cost=(b*bc)+(w*wc);
                printf("%ld\n",cost);
            }
        }
            
    }
}
