#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int result;
    printf("program to check the divisibility by 9");
    printf("\nenter a number");
    scanf("%d",&num);
    result = check(&num);
    if(result == 1)
    {
        printf("number is divisible by 9");
    }
    return 0;
}
int check(int *p)
{
    int num = *p;
    int sum = 0;
    if(num < 9)
    {
        return 0;
    }
    else if(num == 9)
    {
        return 1;
    }
    while(num > 0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    check(&sum);
}
