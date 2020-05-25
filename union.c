#include<stdio.h>

void union_e(int a[],int n,int v,int u)
{
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]==a[v])
			a[i] = a[u];
	}
}

bool find(int a,int b)
{
	if(a==b)
		return true;
	else
		return false;
}

int main()
{
	int i, a[11] = {0,1,2,3,4,5,6,7,8,9,10};
	union_e(a,11,2,5);
	for(i=1;i<11;i++)
		printf("%d ",a[i]);
	printf("\n");
	union_e(a,11,3,7);
	for(i=1;i<11;i++)
		printf("%d ",a[i]);
	printf("\n");
	union_e(a,11,9,2);
	for(i=1;i<11;i++)
		printf("%d ",a[i]);
	printf("\n");
}
