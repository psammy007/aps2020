#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int rno;
};

struct node
{
    struct node *prev;
    struct student s;
    struct node *next;
}*head=NULL,*tail=NULL,*temp=NULL,*p,*d,*z;
void getnode();

int main()
{

   int i;
   for(;;)
   {
   printf("press\n1 to add\n2 to display\n3 to delete\n4 to exit\n");
   scanf("%d",&i);
   switch(i)
   {
       case 1:getnode();
              break;
       case 2:displaynode();
              break;
       case 3:deletenode();
              break;
       default:exit(0);
   }
   }
}

void getnode()
{
    temp=malloc(sizeof(struct node));
    printf("enter name\n");
    scanf("%s",temp->s.name);
    printf("enter roll no\n");
    scanf("%d",&temp->s.rno);

    if(head==NULL)
    {
        head=temp;
        tail=temp;
        head->prev=NULL;
        head->next=NULL;

    }
    else
    {
       temp->prev=tail;
       temp->next=NULL;
       tail->next=temp;
       tail=temp;
    }


}

void displaynode()
{
    p=head;
    while(p!=NULL)
    {
        printf("name:%s\n",p->s.name);
        printf("roll no:%d\n",p->s.rno);
        p=p->next;
    }
}

void deletenode()
{
    int h;
    d=head;
    if(head==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    int k=0;
    printf("enter the roll no to be deleted\n");
    scanf("%d",&h);
    while(d!=NULL)
    {

      if(d->s.rno==h )
      {
           if (head==tail)
          {
              head=NULL;
              tail=NULL;

          }
          else if(d->next==NULL)
          {
              d->prev->next=NULL;
              tail=d->prev;

          }
          else if(d->prev==NULL)
          {
              d->next->prev=NULL;
              head=d->next;
          }

          else
          {
             d->prev->next=d->next;
             d->next->prev=d->prev;
          }

      }
    d=d->next;
    }

}
