#include<stdio.h>

int main(){
    int v,n,i,t;
    scanf("%d%d",&v,&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t==v)
            printf("%d",i);
    }
}

