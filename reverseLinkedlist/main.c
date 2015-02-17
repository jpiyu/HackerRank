#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node NODE;
NODE *front=NULL,*rear=NULL;
void insert(int item);
int del();
int peek();
void display();
main()
{
    int choice,item;

    while(1)
    {
        printf("enter your choice\n1:insert\n2:delete3:peek\n4:display\n5:quit");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("enter the element to be inserted\n");
        scanf("%d",&item);
        insert(item);
        break;
    case 2:
        printf("deleted element is %d\n",del());
        break;
   // case 3:
    //    printf("element at the front of the queue is : %d",peek());
    //    break;
    case 4:
        display();
        break;
    case 5:
        exit(1);
    }

    }
}
void insert(int item)
{
    NODE *tmp;
    tmp = (NODE *)malloc(sizeof(NODE));
    tmp->data = item;
    tmp->link = NULL;
    if(front == NULL)
    {
        front = tmp;
        rear = tmp;
    }
    else
    {
        rear->link = tmp;
        rear = tmp;
    }
}
int del()
{
    int i;
    NODE *tmp;
    tmp = (NODE *)malloc(sizeof(NODE));
    tmp = front;
    i = tmp->data;
    front = front->link;
    free(tmp);
    return i;
}
void display()
{
    struct node *ptr;
    ptr = front;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
}
