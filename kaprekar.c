#include<stdio.h>

main()
{
    long int n,k,temp,len,tri,len1,first,second,flag=0;
    long int s,a[20];
    scanf("%ld%ld",&n,&k);
    /*if(n==400 && k==700)
    {
        printf("INVALID RANGE");
        exit(0);
    }*/
   // printf("%ld %d\n",n,k);
    while(n<=k)
    {
        len=0;
        len1=0;
        temp=n;
       
        tri=n;
        while(tri!=0)
        {
          len1++;  
          tri=tri/10;
        }
        s=temp*temp;
        int i=0;
        while(s!=0)
        {
            a[i]=s%10;
            //printf("%ld",a[i]);
            len++;
            s=s/10;
            i++;
            
        }
        //printf("\n");
        int j=i;
        i=0;
        int c=0;
        first=0;
        second=0;
        int z=1;
       while(c<len1)
       {
           first=first+(a[i]*z);
           //printf("%ld\n",first);
           i++;
           z=z*10;
           c++;
       }
        z=1;
        while(i<j)
        {
            second=second+(a[i]*z);
            i++;
            z=z*10;
        }
      // printf("%ld %ld %ld\n",temp,second,first);
        if((first+second)==temp )
        {
             printf("%ld ",temp);
            flag=1;
        }
        n++; 
    }
    if(flag==0)
    {
        printf("INVALID RANGE");
    }
}
