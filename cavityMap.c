#include<stdio.h>

main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[100][100];
        for(i=0;i<n;i++)
            scanf(" %[^\n]",a[i]);
    
   
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
              if(i>0 && j>0 && i<n-1 && j<n-1)
              {
            if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1])
                printf("X");
            else
                printf("%c",a[i][j]);
              }
            else
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
    
}
