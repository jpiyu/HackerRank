#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalNums,*arr,i,j;
    scanf("%d",&totalNums);
    arr = malloc(3*sizeof(int));
    for(i=0;i<totalNums;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",*arr[0]);
    //for(j=0;j<totalNums;j++)
    //{
       // printf("%d",arr[j]);
    //}
    return 0;

}
int sum(int num)
{
    int sum;
    while(num > 0)
    {
        sum = sum+ num%10;
        num = num/10;
    }
    return sum;
}
