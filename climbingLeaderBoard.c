#include<stdio.h>

main()
{
    int n,i=0,c=0;
    long int a[200000],b[200000];
    scanf("%d",&n);
    while(c<n)
    {
        scanf("%ld",&a[i]);
        if(i>0)
        {
            if(a[i]==a[i-1])
                i--;
        }
        i++;
        c++;
    }
    /*int z=0;
    while(z<i)
    {
        printf("%ld\n",a[z]);
        z++;
    }*/
    int k,r=0;
    scanf("%d",&k);
    while(r<k)
    {
        scanf("%ld",&b[r]);
       // printf("%ld\n",b[r]);
        r++;
    }
    int rank=1;
    if(b[0]>=a[0])
    {
        printf("%d\n",rank);
    }
    else
    {
        i=0;
        while(b[0]<a[i])
        {
            i++;
            //printf("%d\n",);
            rank++;
        }
        printf("%d\n",rank);
    }
    int z=1;
    i--;
    while(z<k)
    {
        long int temp=b[z];
        /*if(temp==a[0])
        {
            printf("%d\n",rank);
            exit(0);
        }*/
        int flag=0;
        while(temp>=a[i])
        {
            if(temp>=a[0])
            {
                flag=1;
                printf("1\n");
                break;
            }
            i--;
            rank--;
           //if(i+1==0&&temp==a[0])
               // rank++;
        }
        if(flag==0)
        printf("%d\n",rank);
        z++;
    }
    
}
