#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[10];

int main() {
    char *s;
    int len,i,temp;
    s=(char *)malloc((char *) sizeof(char *));
    scanf("%[^\n]",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        temp=*(s+i);
        temp=temp-48;
        if(temp>=0 && temp<10)
        a[temp]=a[temp]+1;
    }
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

