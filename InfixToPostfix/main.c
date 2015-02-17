#include <stdio.h>
#include <stdlib.h>

#define MAX 50
char infix[MAX],postfix[MAX];
char stack[MAX];
int top = -1;
int priority(char symbol);
long int pop();
void push(long int symbol);
int main()
{
    printf("enter the infix expression\n");
    gets(infix);
    infix_to_postfix();
    puts(postfix);
    return 0;
}
void infix_to_postfix()
{
    int i,p=0;
    char next;
    for(i=0;i<strlen(infix);i++)
    {
        char symbol = infix[i];
        switch(symbol)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            while(!isEmpty() && priority(stack[top]) >= priority(symbol))
            {
                postfix[p++] = pop();
            }
            push(symbol);
            break;
        case '(':
            push(symbol);
            break;
        case ')':
            while((next = pop()) != '(')
            {
                postfix[p++] = next;
            }
            push(symbol);
            break;
        default:
            postfix[p++] = symbol;

        }
    }
}
int priority(char symbol)
{
    switch(symbol)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}
void push(long int symbol)
{
    if(top>MAX)
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = symbol;
}
long int pop()
{
    return (stack[top--]);
}
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
        return 0;
}
