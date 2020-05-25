#include<stdio.h>

void print(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	int n,i,k,a[100],temp;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		a[i] = i;
	i=1;
	while(1)
	{
		a[i+1]=0;
		i= (i+2)%n;
		print(a,n);
		scanf("%d",&temp);
	}
	
}
