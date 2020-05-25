#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node * insert(struct node *root,int z)
{
    if(root==NULL)
    {
        root=malloc(sizeof(struct node));
        root->data=z;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        if(z>root->data)
            root->right=insert(root->right,z);
        else
           root->left=insert(root->left,z);
    }
    return root;
}

void search(struct node *root,int z)
{
    if(root==NULL)
    {
        printf("data not found\n");
    }
    else if(root->data==z)
    {
        printf("data found\n");
    }
    else
    {
        if(z>root->data)
            search(root->right,z);
        else
            search(root->left,z);
    }

}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}


int main()
{
  int n,z;
  struct node *root=NULL;
  while(1)
  {
      printf("1.insert\n2.search\n3.display\n4.exit\n");
      scanf("%d",&n);
      switch(n)
      {
          case 1:printf("enter no\n");
                 scanf("%d",&z);
                 root=insert(root,z);
                 break;
          case 2:printf("enter the element to search\n");
                 scanf("%d",&z);
                 search(root,z);
                 break;
          case 3:inorder(root);
                 break;
          case 4:exit(0);
          default:printf("invalid input\n");
                  break;
      }
  }
}





