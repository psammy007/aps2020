#include<stdio.h>
#include<stdlib.h>

int max(int p,int q,int r)
{
	if(p<q)
	{
		p=q;
	}
	if(p<r)
		p=r;
	return p;
}

void find_max(int s[],int y)
{
	int g,h;
	for(g=2;g<y;g++)
	{
		s[g]=0;
		for(h=1;h<=(g/2);h++)
		{
			s[g] = max(s[g],h*(g-h),h*(s[g-h]));
		}
	}
}

int main()
{
	int a[100]={0};
	int n,i;
	scanf("%d",&n);
	a[1]=0;
	a[0]=0;
	find_max(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
