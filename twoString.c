#include<stdio.h>
#include<string.h>

void set(int a[],char s[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        a[s[i]-'a'] = 1;
    }
}

int find(int a[],int b[])
{
    int i;
    for(i=0;i<26;i++)
    {
        if(a[i]==1 && b[i]==1)
            return 1;
    }
    return 0;
}

int main()
{
    int q,l,arr1[26],arr2[26],l1,l2;
    char str1[100000],str2[100000];
    scanf("%d",&q);
    while(q)
    {
        memset(arr1, 0, sizeof arr1);
        memset(arr2, 0, sizeof arr2);
        scanf("%s",str1);
        getchar();
        l1 = strlen(str1);
        set(arr1,str1,l1);
        scanf("%s",str2);
        l2 = strlen(str2);
        set(arr2,str2,l2);
        if(find(arr1,arr2))
            printf("YES\n");
        else
            printf("NO\n");
        //printf("%s,%s\n",str1,str2);
        --q;
    }
}

