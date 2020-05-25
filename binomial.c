#include<stdio.h>

int min(int n,int m)
{
	if(n<m)
		return n;
	else
		return m;
}

int main()
{
	int n=10,k=5,i,j;
	int arr[10][10] = {0};
	arr[0][0] = 1;
	for(i=1;i<n;i++)
	{
		for(j=0;j<=min(i,k);j++)
		{
			if(j==0 || j==i)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%-3d",arr[i][j]);
		}
		printf("\n");
	}
}
