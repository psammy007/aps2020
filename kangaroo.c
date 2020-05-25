#include<stdio.h>]

main()
{
    int x1,x2,v1,v2,flag=0;
    scanf("%d %d",&x1,&v1);
    scanf("%d %d",&x2,&v2);
    int d1=x1,d2=x2;
    if(x1>x2 && v1>v2)
        printf("%s","NO");
    else if(x2>x1 && v2>v1)
        printf("%s","NO");
    else
    {
        if(x1>x2 && v2>v1)
        {
            while(d2<=d1)
            {
                d1=d1+v1;
                d2=d2+v2;
                if(d2==d1)
                {
                    printf("%s","YES");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            printf("%s","NO");
        }
        
         if(x2>x1 && v1>v2)
        {
            while(d1<d2)
            {
                d1=d1+v1;
                d2=d2+v2;
                
                if(d2==d1)
                {
                    printf("%s","YES");
                    flag=1;
                    break;
                }
                
            }
             
             if(flag==0)
            printf("%s","NO");
        }
        else
            printf("NO");
    
    }
    
}
