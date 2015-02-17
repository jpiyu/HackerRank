#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,*ptr,a;
    printf("enter the number of elements");
    scanf("%d",&number);
    while(number>0)
    {
        scanf("%d",&a);
        *p = a;
        p++;
    }
    p = p-number;
    for(i=0;i<number;i++)
    {
        a = *p;
        printf("%d",a);
        p++;
    }
    return 0;
}
