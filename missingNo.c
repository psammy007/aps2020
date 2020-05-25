#include<stdio.h>

int f[200000],s[200000];

int main(){
    int n,m,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        f[temp]++;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&temp);
        s[temp]++;
    }
    for(i=0;i<200000;i++){
        if(f[i]!=s[i])
            printf("%d ",i);
    }
}

