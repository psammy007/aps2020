#include<stdio.h>
#include<string.h>


int main()
{
    int n,arr[100][26],l,i,j,res[26],sum;
    char str[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%s",str);
        getchar();
        //printf("%s\n",str);
        l = strlen(str);
        for(i=0;i<l;i++)
            arr[j][str[i]-'a'] = 1;
    }
    for(i=0;i<26;i++)
    {
        sum = 0;
        for(j=0;j<n;j++)
        {
            sum += arr[j][i];
        }
        res[i] = sum;
    }
    int count=0;
    for(i=0;i<26;i++)
    {
        if(res[i]==n)
            count++;
    }
    printf("%d",count);
}

