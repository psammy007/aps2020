#include<stdio.h>

int main(){
    int l,r,i,j,max = 0,temp;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            temp = i^j;
            if(temp>max)
                max = temp; 
        }
    }
    printf("%d",max);
}

