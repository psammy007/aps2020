#include<stdio.h>

main()
{
    int n,i=0;
    scanf("%d",&n);
    while(i<n)
    {
        int k,count=0;
        scanf("%d",&k);
        int rem,temp=k;
        while(temp!=0)
        {
            rem=temp%10;
            if(rem!=0 && k%rem==0)
                count++;
            temp=temp/10;
        }
        printf("%d\n",count);
        i++;
    }
}
