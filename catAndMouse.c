#include<stdio.h>

main()
{
    int n,i=0;
    scanf("%d",&n);
    while(i<n)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int a,b;
        a=x-z;
        if(a<0)
            a=a*(-1);
        b=y-z;
        if(b<0)
            b=b*(-1);
        if(a<b)
            printf("Cat A\n");
        else if(b<a)
            printf("Cat B\n");
        else
            printf("Mouse C\n");
        i++;
    }
    
}
