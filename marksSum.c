
int summ;
int marks_summation(int *s,int n,char c)
{
    int z,i;
    if(c=='b')
    z=0;
    else
    z=1;
    for(i=z;i<n;i=i+2)
    summ=summ+*(s+i);
    return summ;

}


