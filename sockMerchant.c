#include<stdio.h>

main()
{
    int n,i=0,a[100],k=0,sum=0,count;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i++]);
    }
    while(k<n)
    {
        int flag=0,count=0;
        int temp=a[k];
        int e=0;
        while(e<k)
        {
            if(temp==a[e])
            {
                flag=1;
                break;
            }
            e++;
        }
        if(flag==0)
        {
        int j=0;
        while(j<n)
        {
          if(temp==a[j])
              count++;
            j++;
        }
        if(count%2==1)
            count=count-1;
        sum=sum+(count/2);
        }
        
        k++;
    }
    printf("%d\n",sum);
}
