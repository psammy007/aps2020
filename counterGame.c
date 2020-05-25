#include<stdio.h>

int z,o;

void setNo(long long int n)
{
    long long int y = n;
    while(1){
        if((n&1)==0)
            z++;
        else
            break;
        n = n>>1;
    }
    while(n){
        if(n&1)
            o++;
        n = n>>1;
    }
}

int findOnes(long long int n){
    int count = 0;
    while(n)
    {
        if(n&1)
            count++;
        n = n>>1;
    }
    return count;
}

long long int getNo(long long int n){
    int c=0,t,o=1;
    while(n){
        n = n>>1;
        c++;  
    }
    c -= 1;
    return (1<<c);
}

int main()
{
    int t,l=1,noOfOnes;
    long long int n;
    scanf("%d",&t);
    while(t)
    {
        scanf("%lld",&n);
        o=0,z=0;
        if(n==1)
            printf("Richard\n");
        else{
            setNo(n);
            if((o&1)==0){
                if(z&1)
                    printf("Richard\n");
                else
                    printf("Louise\n");
            }
            else{
                if(z&1)
                    printf("Louise\n");
                else
                    printf("Richard\n");
            }
        }
        t--;
    } 
}

