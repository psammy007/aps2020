#include<stdio.h>

int flag;
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void quickSort(int p,int i,int j,int a[])
{
	if(i<j)
	{
		int l = j,pt,temp;
		while(i<j)
		{
			while(a[p]>a[i])
				i++;
			while(a[p]<a[j])
				j--;
			if(i<j)
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
		temp = a[p];
		a[p] = a[j];
		a[j] = temp; 
		quickSort(0,1,j-1,a);
		quickSort(i,i+1,l,a);
	}
}

int main()
{
	int a[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	int n = 20;
	print(a,n);
	quickSort(0,1,n-1,a);
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
