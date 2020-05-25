#include<stdio.h>

void print(int a[])
{
	int i;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}


int root(int a[],int n)
{
	while(a[n]!=n)
		n = a[n];
	return n;
}

void unionAll(int a[],int n,int m)
{
	a[root(a,n)] = a[m];
	print(a);
}

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	unionAll(a,2,5);
	unionAll(a,2,6);
}
