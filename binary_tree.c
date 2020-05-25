#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int flag;

struct node
{
	int data;
	struct node *left;
	struct node *right;
}*temp,*p;

struct node* insert(struct node *root,int data)
{
	if(root==NULL)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = data;
		temp->right = NULL;
		temp->left = NULL;
		root = temp;
	}
	else
	{
		if(root->data>data)
			root->left = insert(root->left,data);
		else
			root->right = insert(root->right,data);
	}
	return root;
}

void levelOrder(struct node *root)
{
    struct node *p;
    int i=0,j=1,flag=1;
    struct node *a[100];
    a[0] = root;
    while(i<j && flag==1)
    {
        p = a[i];
        printf("%d ",p->data);
        if(p->left!=NULL)
        {
           a[j] = p->left;
           j++;
        }
        if(p->right!=NULL)
        {
           a[j] = p->right;
           j++;
        }
        i++;
        scanf("\n%d",&flag);
    }
}

void print(struct node *root)
{
	if(root!=NULL)
	{
		print(root->left);
		printf("%d ",root->data);
		print(root->right);
	}
}
int j;

int decode(struct node *root,char *s)
{
    int res;
    if(root!=NULL)
    {
    	//printf("Entered\n");
    	//scanf("%d",&flag);
        if(s[j]=='0')
        {
        	//printf("Entered 0,j = %d\n",j);
        	//printf("data = %d\n",root->data);
    		//scanf("%d",&flag);
            j++;
            //printf("0");
            res = decode(root->left,s);
            if(res==1)
            {
                printf("%d ",root->data);
                j--;
                res = 0;
            }
            return res;
        }
        else if(s[j]=='1')
        {
            j++;
            //printf("Entered 1,j = %d\n",j);
            //printf("data = %d\n",root->data);
    		//scanf("%d",&flag);
            //printf("1");
            res = decode(root->right,s);
            if(res==1)
            {
                printf("%d ",root->data);
                j--;
                res = 0;
            }
            return res;
        }
        else
        {
        	printf("%d ",root->data);
        	return 0;
        }
    }
    else
    {
        return 1;
    }
    return 1;
}

void decode_huff(struct node * root, char *s) 
{
	int flag=1;
    while(j<(strlen(s)-1) && flag==1)
    {
        decode(root,s);
        //printf("\nj = %d\n",j);
        //scanf("%d",&flag);
    }
}

int min = INT_MAX;
struct node *arr[30];
int i;

struct node *lca( struct node *root, int v1, int v2 )
{
    struct node *res = root,*p = root;
    if(root!=NULL)
    {
        while( p!=NULL && ((v1<p->data && v2<p->data) || (v1>p->data && v2>p->data)) )
        {
            arr[i] = p;
            //printf("%d\n",p->data);
            i++;
            if(v1<p->data)
            {
                //printf("0\n");
                p = p->left;
            }
            else
            {
                //printf("1\n");
                p  = p->right;
            }
        }
    }
        arr[i] = p;
        i++;
    int j;
    for(j=1;j<i;j++)
    {
        if(min>arr[j]->data)
        {
            min = arr[j]->data;
            res = arr[j];
        }
    }
    return res;
}



int main()
{
	struct node *head;
	head = insert(head,8);
	head = insert(head,4);
	head = insert(head,9);
	head = insert(head,1);
	head = insert(head,2);
	head = insert(head,3);
	head = insert(head,6);
	head = insert(head,5);
	print(head);
	//levelOrder(head);
	//printf("j = %d\n",head->left->left->data);
	//char s[20] = "1000100001000001";
	//decode_huff(head,s);
	//struct node *lc = lca(head,1,2);
	//printf("%d\n",lc->data);
}
