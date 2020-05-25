#include<stdio.h>

int a[110];

int uniqNo(){
    int i;
    for(i=0;i<110;i++)
    {
        if(a[i]==1)
            return i;
    }
    return 0;
}

int main(){
    int n,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        a[t] += 1;
    }
    printf("%d",uniqNo());
}

