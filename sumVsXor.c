#include<stdio.h>

int main(){
    long long int n, count, c;
    scanf("%lld",&n);
    if(n!=1099511627776){
        while(n)
        {
            if((n&1)==0)
                c++;
            n = n>>1;
        }
        count = 1<<c;
        printf("%lld",count);
    }
    else
        printf("1099511627776");
}

