#include<stdio.h>

int findmax(int a[],int n)
{
	int i,max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	return max;
}

int find_longest(int a[],int n)
{
	int i,j,r[10]={1};
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				if(r[j]+1>r[i])
					r[i] = r[j]+1; 
			}
		}
	}
	int res = findmax(r,n);
	return res;
}

int main()
{
	int l,a[11] = {5,8,3,10,15,30,25};
	l = find_longest(a,7);
	printf("%d\n",l);
}
