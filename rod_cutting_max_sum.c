#include<stdio.h>

int max(int x,int y,int z)
{
	if(x<y)
		x=y;
	if(x<z)
		x=z;
	return x;
}

int findMax(int a[],int n)
{
	int i,j,b[100];
	b[0] = 0;
	b[1] = a[0];
	for(i=2;i<n;i++)
	{
		b[i] = 0;
		for(j=1;j<(i/2);j++)
		{
			b[i] = max(b[i],a[i-1],a[j]+a[i-j]);
		}
	}
	return b[n-1];
}

int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int res = findMax(a,n);
	printf("%d\n",res);	
}
