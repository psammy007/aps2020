#include<stdio.h>

main()
{
    int d1,d2,m1,m2,y1,y2,fine=0;
    scanf("%d%d%d",&d1,&m1,&y1);
    scanf("%d%d%d",&d2,&m2,&y2);
    if(y1<y2)
    {
        printf("%d",fine);
        exit(0);
    }
     else if (y1==y2 )
    {
         if(m1<m2)
         {
             printf("%d",fine);
             exit(0);
         }
         else if(m1==m2)
         {
             if(d1<=d2)
             {
                 printf("%d",fine);
                 exit(0);
             }
             else
             {
                 fine=(d1-d2)*15;
                 printf("%d",fine);
                 exit(0);
             }
         }
         else
         {
             fine=(m1-m2)*500;
             printf("%d",fine);
             exit(0);
         }
    }
    else
    {
        fine=10000;
        printf("%d",fine);
        exit(0);
    }
}