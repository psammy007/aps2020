#include<stdio.h>
#include<string.h>

int find(char str[],int l)
{
    int i,j,h = l/2,sum=0;
    int a[26]={0},b[26]={0};
    for(i=0;i<h;i++)
    {
        ++a[str[i]-'a'];
    }
    for(i=h;i<l;i++)
    {
        ++b[str[i]-'a'];   
    }
    for(i=0;i<26;i++)
    {
        a[i] = a[i] - b[i];
        if(a[i]<0)
            a[i] *= -1;
        sum += a[i];
    }
    sum /= 2;
    return sum;
}

int main()
{
    int q,l,res;
    char str[10000];
    scanf("%d",&q);
    while(q)
    {
        scanf("%s",str);
        l = strlen(str);
        if(l%2==1)
            res = -1;
        else
            res = find(str,l);
        printf("%d\n",res);
        --q;
    }
}

