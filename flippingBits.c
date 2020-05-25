#include<stdio.h>

int main(){
    unsigned int n,m;
    scanf("%d",&n);
    while(n){
        scanf("%d",&m);
        m = ~m;
        printf("%u\n",m);
        n--;
    }
}

