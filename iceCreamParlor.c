#include<stdio.h>

int fi,si;

int getIndices(int cost[],int m,int n){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(cost[i]+cost[j]==m)
            {
                fi = i;
                si = j;
                return 0;
            }
        }
    }
    return 0;
}

int main(){
    int t,n,m,i,cost[10001];
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d",&m,&n);
        for(i=1;i<=n;i++)
            scanf("%d",&cost[i]);
        getIndices(cost,m,n);
        printf("%d %d\n",fi,si);
        t--;
    }
}

