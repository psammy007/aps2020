#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
    char a[100],b[100];
    int n,count=0;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&n);
    int j=0,l,k,x=0,y=0;
    l=strlen(a);
    k=strlen(b);
    if(l-k==n || k-l==n)
    {
        printf("Yes\n");
        exit(0);
    }
    while(j<l || j<k)
    {
        if(a[j]!=b[j])
            break;
        j++;
    }
    int z=j;
    int f=j;
    while(j<l)
    {
        x++;
        j++;
    }
    while(f<k)
    {
        y++;
        f++;
    }
    int sum;
    sum=x+y;
    //printf("%d\n",sum);
    if(sum==n)
        printf("Yes\n");
    else if(sum>n)
        printf("No");
    else
    {
        if((n-sum)%2==0)
            printf("Yes\n");
        else
        {
            if(sum+((z*2)+1)==n)
                printf("Yes");
            else 
            {
                if(z==0)
                {
                  if((n-k*2)%2==1)
                      printf("Yes");
                }
               else
                  printf("No");
            }
        }
            
    }
        
}
