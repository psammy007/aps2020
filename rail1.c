#include<stdio.h>

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


int find(int a[],int b[],int p,int q,int r,int s)
{
	int count = 0,s1,s2,s3,l1,l2,l3,i,j,k,h,w,x;
	for(i=0;i<r;i++)
	{
		s1 = a[i];
		w=s;
		x=s;
		for(j=r;j<p;j++)
		{
			s2 = a[j];
			for(k=0;k<x;k++)
			{
				s3 = b[k];
				if((-(s3*s3)==(s1*s2)))
				{
					count++;
					x = k;
					break;
				}
			}
			for(k=w;k<q;k++)
			{
				s3 = b[k];
				if((-(s3*s3)==(s1*s2)))
				{
					count++;
					w = k+1;
					break;
				}
			}
		}
	}
	return count;
}

int main()
{
	int i,c,d,q,n,m,x[100000],y[100000],xm,ym;
	scanf("%d",&q);
	while(q)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&x[i]);
		for(i=0;i<m;i++)
			scanf("%d",&y[i]);
		if(n==2)
		{
			if(x[1]<x[0])
			{
				int t = x[1];
				x[1] = x[0];
				x[0] = t;
			}
		}
		else
			quickSort(0,1,n-1,x);
		if(m==2)
		{
			if(y[1]<y[0])
			{
				int t = y[1];
				y[1] = y[0];
				y[0] = t;
			}
		}
		else
			quickSort(0,1,m-1,y);
		for(i=0;i<n;i++)
		{
			if(x[i]>0)
			{
				xm = i;
				break;
			}
		}
		for(i=0;i<m;i++)
		{
			if(y[i]>0)
			{
				ym = i;
				break;
			}
		}
		c = find(x,y,n,m,xm,ym);
		d = find(y,x,m,n,ym,xm);
		c = c + d;
		printf("%d\n",c);
		q--;
	}
}
