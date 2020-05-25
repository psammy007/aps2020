#include<stdio.h>
#include<string.h>

char s[10] = "hackerrank";

int find(char a[],int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(s[j] == a[i])
            j++;
        if(j==10)
            return 1;
    }
    return 0;

}

int main()
{
    int q;
    char str[10000];
    scanf("%d",&q);
    while(q)
    {
        scanf("\n");
        fgets(str,10000,stdin);
        //scanf("%[^\n]%*c",str);
        if(find(str,strlen(str)))
            printf("YES\n");
        else
            printf("NO\n");
        q--;
    }
}

