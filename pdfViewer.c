#include<stdio.h>

main()
{
    int a[26],i=0,l,c=0,area=0,big;
    char str[50],p;
    while(i<26)
    {
        scanf("%d",&a[i]);
        i++;
    }
    scanf("%s",str);
    l=strlen(str);
    big=a[str[0]-97];
    while(c<l)
    { 
         if(big<a[str[c]-97])   
         {
             big=a[str[c]-97];    
         }
        c++;
    }
   
    
    printf("%d",big*l);
    
}
