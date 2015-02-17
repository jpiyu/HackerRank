#include <stdio.h>
#include <stdlib.h>
#define MAX 50
char postfix[MAX];
char stack[MAX];
int top =-1;
int priority(char c);
void push(char c);
int pop();
int main()
{
    char arr[MAX],c,next;
    int length,i,p=0;
    printf("THIS IS A PROGRAM TO CONVERT A MATHEMATICAL EXPRESSION INTO ITS POSTFIX FORM\N");
    printf("enter the string\n");
    scanf("%s",arr);
    length = strlen(arr);
    for(i=0;i<length;i++)
    {
        c = arr[i];
        switch(c)
        {
        case '+':
        case '-':
        case '/':
        case '*':
        case '^':
            while(priority(stack[top]) >= priority(c))
            {
                postfix[p++] = pop();
            }
            push(c);
            break;
        case '(':
               push(c);
            break;
        case ')':
            while(next = pop() != '(')
            {
                postfix[p++] = next;
            }
            break;
        default:
            postfix[p++] = c;
        }
    }
    printf("%s",postfix);
    return 0;
}
int priority(char c)
{
    switch(c)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '/':
    case '*':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}
void push(char c)
{
    if(top > MAX)
    {
        printf("stack overflow");
    }
    stack[++top] = c;
}
int pop()
{
    return stack[top--];
}
