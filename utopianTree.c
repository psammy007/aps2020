#include<stdio.h>

main()
{
    int n,i=0,c=0;
    scanf("%d",&n);
    int a[100];
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    while(c<n)
    {
        int h=1;
        int count=0;
        while(count<a[c])
        {
            if(count<a[c])
            {
              h=h*2; 
                count++;
            }
            else
                break;
            if(count<a[c])
            {
                h=h+1;
                count++;
            }
            else
                break;
        }
        printf("%d\n",h);
     c++;   
    }
}

