#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
#define EXIT_CODE 1
struct node *insert_nrec(struct node *root,int data);
void preoder(struct node *root);
void max_key(struct node *root);
void min_key(struct node *root);
int main()
{
    int choice,data;
    struct node *root = NULL;
    while(1)
    {
        printf("enter your choice\n\t1:insert into tree..\n\t2:preorder traversal\n\t3:inorder traversal\n\t4:postorder traversal\n\t5:max key\n\t6:min key");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the data item\n");
            scanf("%d",&data);
            root = insert_nrec(root,data);
            break;
        case 2:
            preorder(root);
            break;
        case 5:
            max_key(root);
            break;
        case 6:
            min_key(root);
            break;
        default:
            exit(EXIT_CODE);
            printf("please enter the right choice\n");
        }
    }
    return 0;
}
struct node *insert_nrec(struct node *root,int data)
{
    struct node *p,*tmp,*par;
    p = root;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
    if(root == NULL)
    {
        root = tmp;
    }
    else
    {
        while(p != NULL)
        {
            par = p;
            if(data < p->data)
            {
                p = p->left;
            }
            else
            {
                p = p->right;
            }
        }
        if(par == NULL)
            root = tmp;
        else if(data < par->data)
            par->left = tmp;
        else
            par->right = tmp;
    }
    return root;
};
void preorder(struct node *root)
{
    struct node *p;
    p = root;
    if(p == NULL)
        return;
    printf("%d\t",p->data);
    preorder(p->left);
    preorder(p->right);
}
void max_key(struct node *root)
{
    struct node *p;
    p = root;
    if(p == NULL)
    {
        printf("the tree is empty\n");

    }
    else
    {
        while(p != NULL)
        {
             p = p->right;
        }
        printf("The Max Key is : %d\n",p->data);
    }
    return;
}
void min_key(struct node *root)
{
    struct node *p;
    p = root;
    if(p == NULL)
    {
        printf("the tree is empty");
    }
    else
    {
        while(p != NULL)
        {
            p = p->left;
        }
        printf("The Min Key is: %d\n",p->data);
    }
    return;
}
