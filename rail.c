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


int findLength(int x,int y)
{
	return ((x * x)+(y * y));	
}

int find(int a[],int b[],int p,int q,int r)
{
	int count = 0,s1,s2,s3,l1,l2,l3,i,j,k,h,co=0;
	//printf("came\n");
	for(i=0;i<r;i++)
	{
		s1 = a[i];
		//printf("s1 = %d\n",s1);
		for(j=r;j<p;j++)
		{
			s2 = a[j];
			//printf("s2 = %d\n",s2);
			l1 = (s1-s2) * (s1-s2);
			h = s2-s1;
			//printf("l1 = %d\n",l1);
			for(k=0;k<q;k++)
			{
				s3 = b[k];
				//printf("s3 = %d\n",s3);
				l2 = findLength(s1,s3);
				l3 = findLength(s2,s3);
				if(l3==(h*s2))
				{
					co++;
					printf("%d %d %d\n",s1,s2,s3);
				}
				//printf("l2 = %d\nl3 = %d\n",l2,l3);
				/*if((l1 == l2+l3) || (l2 == l1+l3) || (l3==l1+l2))
				{
					count++;
					printf("%d %d %d\n",l1,l2,l3);
				}*/
			}
		}
	}
	//printf("%d\n",co);
	return count;
}

void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
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
		print(x,n);
		print(y,m);
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
		//printf("xm = %d ym = %d\n",xm,ym);
		//printf("first c = %d\n",c);
		d = find(y,x,m,n,ym);
		c = find(x,y,n,m,xm);
		//printf("d = %d\n",d);
		c = c + d;
		printf("%d\n",c);
		q--;
	}
}
