#include<stdio.h>

int main()
{
    int i,n,temp;
    scanf("%d",&n);
    int a = 0,b = 1;
    printf("0 1 ");
   	for(i=2;i<n;i++)
   	{
   		printf("%d ",a+b);
   		temp = a;
   		a = b;
   		b = temp + b;
   	}
   	printf("\n");
	return 0;
}

