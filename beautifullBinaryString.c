#include<stdio.h>

int main()
{
    int n,i=0,c=0;
    char str[100];
    scanf("%d",&n);
    scanf("%s",str);
    while(i<n-2)
    {
        if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0')
        {
            c++;
            str[i+2] = '1';
        }
        i++;
    }
    printf("%d",c);
}

