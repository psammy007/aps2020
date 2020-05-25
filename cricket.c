#include <stdio.h>
#include <stdlib.h>
int flag=0;
int a[1000000];
int sum,r,b,u;

void findscore(int,int);
void findscore_o(int,int);

int main()
{
    int i,z=0,k=2;
    float p;
    scanf("%f",&p);
    scanf("%d%d",&b,&r);

    u=(int)(p*b);
   // printf("u is %d\n",u);
    if(((u*6)+(b-u)*4)<r-1)
    {
        printf("match result\nmatch will be lost\n");
    }
    else if(((u*6)+(b-u)*4)==r-1)
    {
        printf("match result\nmatch drawn\n");
    }
    else
    {
        for(i=0;i<b;i++)
        {
            a[i]=1;
            sum=b;
        }
        if(sum>=r)
        {
            for(i=0;i<b;i++)
                printf("%d ",a[i]);
            printf("you will win the match\n");
        }
        else
            findscore(z,k);
    }

}

void findscore(int z,int k)
{
    //printf("flag is %d\n",flag);
    //printf("enter flag\n");
    //scanf("%d",&flag);
    if(flag==0)
    {
    int i;
    sum=0;
    a[z]=k;
     for(i=0;i<b;i++)
    {
        sum=sum+a[i];
        //printf("%d ",a[i]);
    }
    //printf("sum is %d\n",sum);
    if(sum>=r)
    {
         printf("match result\n");
        for(i=0;i<b;i++)
            printf("%d ",a[i]);
    printf("\nyou will win the match\n");
    flag=1;
    }
    z++;
    if(z==b)
    {
        k++;
        if(k==5)
            k++;
        z=0;
    }
        findscore(z,k);
    }
    else
        return;
}

