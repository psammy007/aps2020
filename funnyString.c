#include<stdio.h>
#include<string.h>

int isFunny(int sum[],int l)
{
    int i=0,j=l-2;
    while(i<j)
    {
        if(sum[i]!=sum[j])
            return 0;
        ++i;
        --j;
    }
    return 1;
}


void print(int sum[],int l)
{
    int i;
    for(i=0;i<l/2;i++)
        printf("%d ",sum[i]);
    printf("\n");
    for(i=l/2;i<l-1;i++)
        printf("%d ",sum[i]);
    printf("\n");
}

void mod(int sum[],int l)
{
    int i;
    for(i=0;i<l-1;i++)
    {
        if(sum[i]<0)
            sum[i] *= -1;
    }
}

int main()
{
    int q,l,i,sum[10000] = {0};
    char str[10000];
    scanf("%d",&q);
    while(q)
    {
        scanf("%s",str);
        l = strlen(str);
        for(i=1;i<l;i++)
            sum[i-1] = str[i] - str[i-1];
        mod(sum,l);
        //print(sum,l);
        if(isFunny(sum,l))
            printf("Funny\n");
        else
            printf("Not Funny\n");
        q--;
    }
}

