#include<stdio.h>

int arr[100];

int find(int a[],int p,int sum)
{
	arr[p] = 3;
	if(sum-3==0)
	{
		int i;
		for(i=0;i<=p;i++)
			printf("%d ",a[i]);
		printf("\n");
	
	}
	else if(sum - 3 > 0)
		find(arr,p+1,sum-3);
	
	arr[p] = 5;
	if(sum-5==0)
	{
		int i;
		for(i=0;i<=p;i++)
			printf("%d ",a[i]);
		printf("\n");
	
	}
	else if(sum - 5 > 0)
		find(arr,p+1,sum-5);
	arr[p] = 10;
	if(sum-10==0)
	{
		int i;
		for(i=0;i<=p;i++)
			printf("%d ",a[i]);
		printf("\n");
	
	}
	else if(sum - 10 > 0)
		find(arr,p+1,sum-10);
}

int main()
{
	int sum = 16;
	arr[0] = 3;
	find(arr,1,sum - 3);
	arr[0] = 5;
	find(arr,1,sum - 5);
	arr[0] = 10;
	find(arr,1,sum - 10);
}
