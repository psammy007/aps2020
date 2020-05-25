#include<stdio.h>
#include<string.h>

void removeSpaces(char a[])
{
    int l = strlen(a),i,j=0;
    for(i=0;i<l;i++)
    {
        a[i-j] = a[i];
        if(a[i]==' ')
            j++;
    }
    if(j!=0)
        a[l-j]='\0';
    for(i=0;i<l-j;i++)
    {
        if(a[i]<91)
            a[i] += 32;
    }
}

int isPangram(char *a)
{
    int l=strlen(a),i;
    int arr[26] = {0};
    for(i=0;i<l;i++)
    {
        arr[a[i]-'a'] = 1;
    }
    int sum=0;
    for(i=0;i<26;i++)
        sum += arr[i];
    if(sum==26)
        return 1;
    else
        return 0;
}

int main()
{
    char str[1000];
    scanf("%[^\n]%*c",str);
    removeSpaces(str);
    if(isPangram(str))
        printf("pangram\n");
    else
        printf("not pangram\n");
}

