#include<stdio.h>

main()
{
    int n,l;
    scanf("%d",&n);
    int s=n-1;
    for(l=1;l<=n;l++)
    {
        int j=1;
        int v=0;
        while(j<=s)
        {
            printf(" ");
            j++;
            v++;
        }
        s--;
        while(v<n)
        {
            printf("#");
            v++;
        }
        printf("\n");
    }
}
