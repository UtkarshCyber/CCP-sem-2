#include <stdio.h>
#include <stdlib.h>



struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;


struct node* create()
{struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the new data\n");
 scanf("%d",&temp->data);
 temp->right=temp->left=NULL;
 return temp;
}

void insert(struct node *root,struct node *temp)
{if(temp->data<root->data)
 {   if(root->left!=NULL)
     insert(root->left,temp);
     else
     root->left=temp;
 }
 else
 { if(root->right!=NULL)
   insert(root->right,temp);
   else
   root->right=temp;
 }}
  
  struct node *Max(struct node *ptr)
{
        if(ptr==NULL)
                return NULL;
        else if(ptr->right==NULL)
        return ptr;
        else
                return Max(ptr->right);
}

int main()
{
    
    int a;
    struct node *temp,*maximum;
    while(1){
        printf("Enter operation\n1.Insert\n2.Max value\n3.Exit\n");
        scanf("%d",&a);
    switch(a){
     case 1: temp=create();
          if(root==NULL)
          root=temp;
          else
          insert(root,temp);
          printf("ELEMENT INSERTED\n");
          break;
  
    case 2: maximum=Max(root);
    printf("The max value in this tree is %d\n",maximum->data);
       break;
    case 3: exit(0);
            break;
    }
}
return 0;
}