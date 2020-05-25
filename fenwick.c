#include<stdio.h>

int BIT[1000],A[1000];
n = 10;

void update(int index,int data)
{
	for(;index<=n;index+=(index&(-index)))
		BIT[index] += data;
}

int query(int i)
{
	int sum = 0;
	for(;i>0;i=i-(i&(-i)))
	{
		sum += BIT[i];
	}
	return sum;
}

int main()
{
	int i,d,n;
	scanf("%d%d",&i,&d);
	update(i,d);
	for(n=0;n<i;i++)
		printf("%d ",BIT[n]);
	printf("\n");
}
