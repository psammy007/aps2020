#include<stdio.h>

int area(int a[][100],int h,int w)
{
    int i,j,temp;
    int totalArea = 0;
    totalArea = 2 * (h * w);
    for(i=0;i<h;i++)
        totalArea += (a[i][0] + a[i][w-1]);
    for(i=0;i<w;i++)
        totalArea += (a[0][i] + a[h-1][i]);
    for(i=0;i<h;i++){
        for(j=1;j<w;j++){
            temp = a[i][j] - a[i][j-1];
            if(temp<0)
                temp *= -1;
            totalArea += temp;
        }
    }
    for(i=0;i<w;i++){
        for(j=1;j<h;j++){
            temp = a[j][i] - a[j-1][i];
            if(temp<0)
                temp *= -1;
            totalArea += temp;
        }
    }
    return totalArea;
}

int main(){
    int i,j,h,w,a[100][100];
    scanf("%d%d",&h,&w);
    for(i=0;i<h;i++)
        for(j=0;j<w;j++)
            scanf("%d",&a[i][j]);
    printf("%d",area(a,h,w));
}

