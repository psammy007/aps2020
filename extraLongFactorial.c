#include<stdio.h>

int a[200];
main()
    
{
    int n;
    a[0]=1;
    int count=1,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        int g=0,carry=0;
        while(g<count)
        {
            int temp=a[g];
           // printf("%d\n",temp);
            a[g]=((a[g]*i)+carry)%10;
            carry=((temp*i)+carry)/10;
            g++;
        }
        if(carry!=0)
        {
              while(carry!=0)
              {
                  a[g]=carry%10;
                  carry=carry/10;
                  g++;count++;
              }
        }
    }
    count--;
    while(count>=0)
    {
        printf("%d",a[count]);
        count--;
    }
}
