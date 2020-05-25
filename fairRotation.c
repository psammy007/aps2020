#include<stdio.h>

int main()
{
    int i,n,c=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        if(a[i-1]&1)
        {
            a[i-1] += 1;
            a[i] += 1;
            c += 2;
        }
    }
    int flag = 0;
    for(i=0;i<n;i++){
        if(a[i]&1)
            flag=1;
    }
    if(flag==1)
        printf("NO");
    else
        printf("%d",c);    
}

