#include<stdio.h>
void main()
{
    int first,second,i=2,k=0;
    int arr[10];
    printf("enter the two numbers");
    scanf("%d %d",&first,&second);

    while(first != second)
    {
        if(first%i == 0 && second&i == 0)
        {
            first = first/i;
            second = second/i;
            arr[k++] = i;
            i++;
        }

        else
        {

          if(first%i)
        {
            first = first/i;
            arr[k++] = i;
            i++;
        }
        if(second%i)
        {
            second = second/i;
            arr[k++] = i;
            i++;
        }


        }



    }

    for(k=0;k<5;k++)
    {
        printf("%d",arr[k]);
    }

}
