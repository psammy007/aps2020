#include<stdio.h>

int find(int a[],int n)
{
	if((15-n==0)
	{
		return 1;
	}
	else if(a[15-n])
	else
	{
		return 0;
	}
}


void find_seq(int arr[])
{
	find(arr,3);
	find(arr,5);
	find(arr,10);
}

int main()
{
	int a[20] = {0},i,n;
	a[0] = 1;
	for(i=3;i<16;i++)
	{
		a[i] = a[i]+a[i-3];
	}
	for(i=5;i<16;i++)
	{
		a[i] = a[i]+a[i-5];
	}
	for(i=10;i<16;i++)
	{
		a[i] = a[i]+a[i-10];
	}
	for(i=0;i<16;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	find_seq(arr);
}
