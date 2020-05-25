#include<stdio.h>

int main()
{
    int n,m,i,j,k,res=0,t=0,c=0;
    char str[500][500];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            str[i][j] = str[i][j] - 48;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=0;
            for(k=0;k<m;k++)
                t += str[i][k]|str[j][k];
            if(t==res)
                c++;
            if(t>res)
            {
                res = t;
                c = 0;
            }
        }
    }
    printf("%d\n%d",res,c+1);
}

