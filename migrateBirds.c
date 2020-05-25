#include<stdio.h>

int main()
{
    int max=0,maximum,count=0,i=0,n,a[2000000],j=0,h,k=1;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    /*while(j<n)
    {
    printf("%d\n",a[j]);
    j++;
    }*/
    while(k<6)
    {
        count=0;
        h=0;
        while(h<n)
        {
            if(a[h]==k)
            {
                count++;
            }
            h++;
           
        }
         //printf("%d\n",count);
        if(count>max)
        {
            max=count;
            maximum=k;
        }
        else
        {
             if(count==max)
             {
            if(k<maximum)
                maximum=k;
             }
        }
        k++;
    }
    printf("%d",maximum);
}
