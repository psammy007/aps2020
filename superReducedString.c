#include<stdio.h>
#include<string.h>

void eliminate(char a[],int n)
{
    int i=0,j=0;
    while(i<n)
    {
        if(i-j>=0)
            a[i-j] = a[i];
        if(a[i]=='0')
        {
            j++;
        }
       i++;
    }
    a[n-j] = '\0';
}

void find(char a[])
{
    int i,j,flag=1;
    i=1;
    while(flag==1)
    {
        flag=0;
        for(i=1;i<strlen(a);i++)
        {
            if(a[i-1]==a[i])
            {
                a[i-1] = '0';
                a[i] = '0';
                flag=1;
            }
        }
        eliminate(a,strlen(a));
    }
}

int main()
{
    char str[100];
    scanf("%[^\n]%*c",str);
    find(str);
    if(strlen(str))
        printf("%s\n",str);
    else
        printf("Empty String\n");
}

