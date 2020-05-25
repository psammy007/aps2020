#include<stdio.h>
#include<string.h>

int find(char a[])
{
    int l = strlen(a),i=0;
    int c=0;
    while(i<l)
    {
        if(a[i]!='S')
            c++;
        if(a[i+1]!='O')
            c++;
        if(a[i+2]!='S')
            c++;
        i = i + 3;
    }
    return c;
}

int main()
{
    char str[100];
    scanf("%s",str);
    int y = find(str);
    printf("%d",y);
}

