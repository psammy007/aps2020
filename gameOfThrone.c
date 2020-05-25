#include<stdio.h>
#include<string.h>

int arr[26];

int isPalindrome(char str[])
{
    int i,l=strlen(str);
    for(i=0;i<l;i++)
        arr[str[i]-'a']++;
    int c=0;
    for(i=0;i<26;i++)
    {
        if(arr[i]&1)
            c++;
        if(c>1)
            return 0;
    }
    return 1;
}

int main(){
    char str[100000];
    scanf("%s",str);
    if(isPalindrome(str))
        printf("YES\n");
    else
        printf("NO\n");
}

