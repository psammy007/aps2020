#include<stdio.h>

void print(int a[],int n)
{
	int i;
	for(i=0;i<=n;i++)
		printf("%-5d",a[i]);
	printf("\n");
}

int min(int n,int m)
{
	if(n<m)
		return n;
	else
		return m;
}

int main()
{
	int n=10,k=5,j,i;
	int arr[10] = {0};
	arr[0] = 1;
	printf("1\n");
	for(i=1;i<n;i++)
	{
		for(j=min(i,k);j>0;j--)
		{
			arr[j] = arr[j] + arr[j-1];
		}
		print(arr,i);
	}
}
