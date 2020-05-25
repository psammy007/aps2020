#include<stdio.h>

int main()
{
    int t,a,b,n,j,k,i,w,z;
    scanf("%d",&w);
    while(w)
    {
        scanf("%d%d%d",&n,&a,&b);
        if(b<a)
        {
            t = b;
            b = a;
            a = t;
        }
        if(a==b)
            printf("%d",(n-1)*a);
        else{
            z = n-1;
            for(i=0;i<n;i++)
                printf("%d ",(((z-i)*a)+(i*b)));
        }
        printf("\n");
        w--;
    }
}

