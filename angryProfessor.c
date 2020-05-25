#include<stdio.h>
struct node
{
    int n,k;
    int s[1000];
    
};

main()
{
    struct node a[100];
    int t,i=0,e=0,d,c;
    scanf("%d",&t);
    while(i<t)
    {
        int j=0;
        scanf("%d",&a[i].n);
        int m=a[i].n;
        scanf("%d",&a[i].k);
        while(j<m)
        {
          scanf("%d",&a[i].s[j]);
            j++;
        }
        i++;
    }
    while(e<t)
    {
        int count=0;
        c=0;d=0;
        while(d<a[e].n)
        {
           if(a[e].s[c]<=0)
           {
               count++;
           }
            c++;
           d++; 
        }
       // printf("count=%d\n",count);
        //printf("k=%d\n",a[e].k);
        if(count>=a[e].k)
            printf("NO\n");
        else
            printf("YES\n");
        e++;
       //printf("e=%d\n",e);
    }
    
}
