#include <stdio.h>
#include <stdlib.h>
int stack[13],tmpstack[13],top1=-1,top2=-1;

void push(int );
void pushtmp(int );
void pop();
void poptmp();
void sort();

int main()
{
    int n,i;
    printf("Enter the elements\n");
    for(i=0;i<13;i++)
    {
    scanf("%d",&n);
    push(n);
    }
    sort();
    printf("The sorted stack is \n");
    for(i=0;i<13;i++)
        printf("%d\n",tmpstack[i]);
    return 0;
}

void push(int n)
{
    top1++;
    stack[top1]=n;
}

void pushtmp(int n)
{
    top2++;
    tmpstack[top2]=n;
}

void pop()
{
    top1--;
}

void poptmp()
{
    top2--;
}

void sort()
{
    int temp;
    while(top1>=0)
    {
        temp=stack[top1];
        pop();
        while(temp<tmpstack[top2])
        {
            push(tmpstack[top2]);
            poptmp();
        }
        pushtmp(temp);
    }
}
