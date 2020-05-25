#include<stdio.h>

main()
{
    char s[102];
    long int n,l,i,r,k=0,count=0,j=0,sum=0,z;
    scanf("%s",s);
    getchar();
    scanf("%ld",&n);
    i=strlen(s);
    while(j<i)
    {
        if(s[j]=='a')
        {
            sum=sum+1;
        }
        j++;
    }
    z=n/i;
    count=sum*z;
    r=n%i;
    while(k<r)
    {
        if(s[k]=='a')
        {
            count++;
        }
        k++;
    }
    printf("%ld",count);
}
