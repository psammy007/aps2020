#include<stdio.h>
#include<string.h>

void encrypt(char a[],int n,int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            if((a[i]>='a' && a[i]<='z'))
            {
                if(a[i]+n>122)
                    a[i] = ((a[i]+n)%122)+96;
                else
                    a[i] = a[i]+n;
            }
            else
            {
                if(a[i]+n>90)
                    a[i] = ((a[i]+n)%90)+64;
                else
                    a[i] = a[i]+n;
            }
        }
    }
}

int main()
{
    int q,n;
    char str[100];
    scanf("%d",&q);
    scanf("%s",str);
    scanf("\n");
    scanf("%d",&n);
    n = n % 26;
    encrypt(str,n,q);
    printf("%s\n",str);
        
}

