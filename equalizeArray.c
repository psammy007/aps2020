#include<stdio.h>

main()
{
    int n,a[110],b[100],i=0,c=1;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    b[0]=a[0];
    while(i<n)
    {
        int temp=a[i];
        if(i!=0)
        {
            int o=0,flag=0;
            while(o<c)
            {
                if(temp!=b[o])
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
                o++;
            }
            if(flag==1)
            {
                b[c]=temp;
                c++;
            }
        }
        i++;
    }
    int g=0,trial,big=0;
    while(g<c)
    {
       int trial=b[g],count=0;
        i=0;
        while(i<n)
        {
            if(trial==a[i])
            {
                count++;
               // printf("%d\n",count);
            }
            i++;
        }
        if(big<count)
        {
            big=count;
        }
        g++;
    }
    printf("%d",n-big);
}
