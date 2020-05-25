#include<stdio.h>

int main()
{
    int n;
    int i,s=0;
    scanf("%d",&n);
    int a[n];
    int z=0;
        while(z<n)
        {
            scanf("%d",&a[z]);
            z++;
        }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d\n",s);
    
}
