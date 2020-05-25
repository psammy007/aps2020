#include <stdio.h>
#include<limits.h>

void clear(int a[4][4],int n,int m)
{
	int i;
	for(i=0;i<4;i++)
	{
		a[n][i] = 0;
		a[i][m] = 0;
	}
}

int findMax(int a[4][4])
{
	int x,y,i,j;
	int max = a[0][0];
	for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
		{
			if(max<a[x][y])
			{
				max = a[x][y];
				i = x;
				j = y;
			}
		}
	}
	clear(a,i,j);
	return max;
}

int main(void) {
	int z,n,t,x,y,i,j,a[4][4] = {0},pr[4]={100,75,50,25};
	int first,sum,final_sum=0,p,q,r,s;
	char m;
	scanf("%d",&z);
	while(z)
	{
		sum = 0,p = 0,q = 0,r = 0,s = 0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    	getchar();
	        scanf("%c",&m);
	        scanf("%d",&t);
	        if(m=='A')
	        {
	        	y = 0;
	        	p=1;
	        }
	        else if(m == 'B')
	        {
	        	y = 1;
	        	q=1;
	        }
	        else if(m == 'C')
	        {
	        	y = 2;
	        	r=1;	
	        }
	        else if(m == 'D')
	        {	
	        	y = 3;
	        	s=1;
	        }
	        if(t==12)
	        	x = 0;
	        else if(t == 3)
	        	x = 1;
	        else if(t == 6)
	        	x = 2;
	        else if(t == 9)
	        	x = 3;
	        a[y][x]++;
	    }
	    for(i=0;i<4;i++)
	    {
	    		first = findMax(a);
	    		sum = sum + (first * pr[i]);
	    }
	    if((p+q+r+s)!=4)
	    {
	    	sum = sum + (((p+q+r+s)-4) * 100);
	    }
	    final_sum = final_sum + sum;
	    printf("%d\n",sum);
	    z--;
	}
	printf("%d\n",final_sum);
	return 0;
}
