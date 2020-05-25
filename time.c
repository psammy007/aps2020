#include<stdio.h>

main()
{
    int i=0;
    char s[20];
    scanf("%s",s);
    getchar();
    if(s[8]=='P')
    {
        int f=s[0]-48;
        int second=s[1]-48;
        int n;
        n=second+(f*10);
        n=n+12;
        if(n==24)
        {
            s[0]=49;
            s[1]=50;
            printf("%c",s[0]);
            printf("%c",s[1]);
            i=2;
        }
        if(n<24)
        {
        char t=(n%10)+48;
        char e=(n/10)+48;
            s[0]=e;
            s[1]=t;
        }
        
    }
    if (s[8]=='A')
    {
        int f=s[0]-48;
        int second=s[1]-48;
        int n;
        n=second+(f*10);
    
           if(n==12)
        {
            s[0]=48;
            s[1]=48;
            printf("%c",s[0]);
            printf("%c",s[1]);
            i=2;
        }
        if(n<12)
        {
            char t=(n%10)+48;
            char e=(n/10)+48;
            s[0]=e;
            s[1]=t;
        }

    }
    while(i<8)
    {
        printf("%c",s[i]);
        i++;
    }
}

