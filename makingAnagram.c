#include<stdio.h>
#include<string.h>

int st1[26],st2[26];

int getNo(char str1[],char str2[]){
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int i;
    for(i=0;i<l1;i++)
        st1[str1[i]-'a']++;
    for(i=0;i<l2;i++)
        st2[str2[i]-'a']++;
    int sum = 0,temp;
    for(i=0;i<26;i++)
    {
        temp = st1[i] - st2[i];
        if(temp<0)
            temp *= -1;
        sum += temp;
    }
    return sum;
}

int main()
{
    char str1[10000],str2[10000];
    scanf("%s",str1);
    getchar();
    scanf("%s",str2);
    printf("%d",getNo(str1,str2));
}

