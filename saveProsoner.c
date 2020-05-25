#include<stdio.h>

main()
{
    int t,i=0;
    scanf("%d",&t);
     while(i<t)
    {
        long int m,n,s,rem;
        scanf("%ld%ld%ld",&m,&n,&s);
        rem=n%m;
        int count=0;
        if(rem==0)
            if (s==1)
                s=m;
            else
                s=s-1;
         else
         {
          s=s+rem-1;
         if(s>m)
         {
             s=s%m;
         }
         }
        printf("%ld\n",s);
        i++;
    }
}
