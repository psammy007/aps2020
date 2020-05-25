#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void pop(char[],int);

int main()
{
   char r[20];
   printf("enter a string\n");
   gets(r);
   int len;
   len=strlen(r);
   pop(r,len);

}
void pop(char r[],int len)
{
  while(len>=0)
   {
     len--;
     printf("%c",r[len]);
   }

}

