#include<stdio.h>
#include<math.h>
int s[100][100];

void sparseTable(int a[],int n)
{
	int i ,j = sqrt(n);
	for(i=0;i<n;i++)
		s[i][0] = i;
	for(i=1;i<n;i++)
	{
		for(j=1;j<nj=)
	}
}

int main()
{
	int i,n,a[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sparseTable(a,n);
}
