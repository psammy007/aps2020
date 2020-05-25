#include<stdio.h>
#include<string.h>

int find(char a[],int l)
{
    int no=0,uAl=0,lAl=0,spC=0,i;
    for(i=0;i<l;i++)
    {
        if(a[i]>='0' && a[i]<='9')
            no = 1;
        if(a[i]>='a' && a[i]<='z')
            lAl = 1;
        if(a[i]>='A' && a[i]<='Z')
            uAl = 1;
        if(a[i]>=33 && a[i]<=45)
            spC = 1;
        if(a[i]==64 || a[i] == 94)
            spC = 1;
        if((no+uAl+lAl+spC)==4)
            return 0;
    }
    return 4-(no+uAl+lAl+spC);
}

int main()
{
    int m,n,i;
    char str[100];
    scanf("%d",&n);
    getchar();
    scanf("%[^\n]%*c",str);
    n = strlen(str);
    m = find(str,n);
    //printf("%d %d\n",m,n);
    if(n>=6)
        printf("%d\n",m);
    else
    {
        n = 6 - n;
        if(n>m)
            printf("%d\n",n);
        else
            printf("%d\n",m);
    }
}

