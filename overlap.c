#include<stdio.h> 
  
int dayofweek(int d, int m, long long int y) 
{ 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    y -= m < 3; 
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7; 
} 
  
int day[7] = {5,4,3,2,1,0,6};
int lday[7] = {7,8,9,10,11,12,13};
int lastDay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
/* Driver function to test above function */

int isLeap(long long int m)
{
	if(m%4==0)
	{
		if(m%100==0)
		{
			if(m%400==0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0;
}

int findLast(int n,long long int m)
{
	if(n==2)
	{
		if(isLeap(m))
			return lastDay[n]+1;
		else
			return lastDay[n];
	}
	else
		return lastDay[n];
}

long long int find(long long int y1,long long int y2)
{
	long long int s,e,res;
	s = y1 - (y1%400);
	e = y2 - (y2%400);
	res = (e/400) - (s/400);
	return res;
}

long long int findOverlap(long long int y1,long long int y2)
{
	int f,l,last;
	long long int c=0;
	while(y1<y2)
	{
		f = 1+day[dayofweek(1, 2, y1)];
		last = findLast(2,y1);
		l = last - lday[dayofweek(last,2,y1)];
		if((f+10)>l)
		{
			c++;
			//printf("%lld\n",y1);
		}
		y1++;
	}
	return c;
}
int main() 
{  
	int q,m1,m2,f,l,last;
	long long int y1,y2,c;
	scanf("%d",&q);
	while(q)
	{
		scanf("%d%lld",&m1,&y1);
		scanf("%d%lld",&m2,&y2);
		if(m1>2)
			y1++;
		c=0;
		if(m2>=2)
			y2++;
		if((y2-y1)>200)
		{
			long long int ty1,ty2,c1,c2,c3;
			ty1 = y1 + (100 - (y1%100));
			c1 = findOverlap(y1,ty1+1);
			ty2 = y2 - (y2%100);
			//printf("ty1 = %lld ty2 = %lld\n",ty1,ty2);
			c3 = findOverlap(ty2+1,y2);
			c2 = ((ty2-ty1)/100) * 25;
			c2  = c2 + find(ty1,ty2);
			//printf("c1 = %lld,c2 = %lld,c3 = %lld\n",c1,c2,c3);
			c = c1 + c2 + c3;
		}
		else
		{
			c = findOverlap(y1,y2);
		}
		printf("%lld\n",c);
		q--;
	}
    return 0; 
} 
