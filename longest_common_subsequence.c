#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int seq[100],k=0;
	char str1[40]="1ab123c45d67efgh#$t";
	char str2[40]="01a12b4cde678f34g56ht";
	int i,j,a[40][40]={0},sum=0;
	for(i=1;i<=strlen(str1);i++)
	{
		for(j=1;j<=strlen(str2);j++)
		{
			if(str1[i-1]==str2[j-1])
			{
				a[i][j] = a[i-1][j-1]+1;
				sum = sum * 10 +j;
			}
			else
			{
				a[i][j] = max(a[i][j-1],a[i-1][j]);
			}
		}
	}
	/*for(i=0;i<=strlen(str1);i++)
	{
		for(j=0;j<=strlen(str2);j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}*/
	printf("length of longest subsequence is %d\n",a[strlen(str1)][strlen(str2)]);
	i = strlen(str1);
	j = strlen(str2);
	int flag=1;
	//printf("%d %d\n",i,j);
	while(!(a[i-1][j]==0 && a[i][j-1]==0)/* && flag==1*/)
	{
		if((a[i][j] == a[i-1][j] && a[i][j] != a[i][j-1]) || (a[i][j] != a[i-1][j] && a[i][j] == a[i][j-1]))
		{
			//printf("#\n");
			if(a[i][j] == a[i-1][j])
				i = i - 1;
			if(a[i][j] == a[i][j-1])
				j = j - 1;
		}
		else if (a[i][j] == (a[i-1][j-1] + 1))
		{
			//printf("$\n");
			seq[k] = j;
			k++;
			i = i - 1;
			j = j - 1;
		}
		else if(a[i][j] == a[i][j-1] && a[i][j]==a[i-1][j] && a[i][j] == a[i-1][j-1])
		{
			i = i - 1;
		}
		//printf("%d %d\n",i,j);
		//scanf("%d",&flag);   
	}
	seq[k] = j;
	int n;
	i = k;
	int y;
	printf("And longest subsequence is\n");
	while(i>=0)
	{
		printf("%c",str2[seq[i]-1]);
		i = i - 1;
	}
	printf("\n");
}


