#include<stdio.h>

main()
{
    int n,i,k,c,count=0;
    scanf("%d %d",&n,&i);
    k=n-i;
    if(k<i)
        c=1;
    else
        c=0;
    int s=0;
    int l=n;
    switch(c)
    {
        case 0:while(i)
               {
                  if(s==i||s+1==i)
                  {
                      printf("%d\n",count);
                      break;
                  }
                  count++;
                  s=s+2;
                
               }
            break;
        case 1:if(n%2==1)
               {
               while(i)
               {
                     if(l==i||l-1==i)
                     {
                         printf("%d\n",count);
                         break;
                     }
                count++;
                l=l-2;
               }
               }
               else
               {
                if(l==i)
                {
                    printf("%d",count);
                    break;   
                }
                   count=1;
                l=l-2;
                while(i)
               {
                     if(l==i||l+1==i)
                     {
                         printf("%d\n",count);
                         break;
                     }
                count++;
                l=l-2;
               }
               }
            break;
    }
    
}
