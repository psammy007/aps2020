#include<stdio.h>
#include<math.h>

main()
{
    int q,i=0;
    scanf("%d",&q);
    while(i<q)
    {
        int count=0;
        long int a,b,root;
        scanf("%ld %ld",&a,&b);
        while(a<=b)
        {
            int temp=a,z=2;
            root=sqrt(temp);
            if((root*root)==temp)
            {
                count++;
               a=a+(root*2);
            }
            a++;
        }
        printf("%d\n",count);
        i++;
    }
}
