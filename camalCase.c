#include<stdio.h>
#include<string.h>

int find(char a[])
{
    int i,l,s=1;
    l = strlen(a);
    for(i=1;i<l;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            s++;
    }
    return s;
}

int main()
{
    int r;
    char str[100000];
    scanf("%[^\n]%*c",str);
    r = find(str);
    printf("%d\n",r);

}

