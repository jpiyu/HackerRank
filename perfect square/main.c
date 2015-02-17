#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10];
    int i,j=0,k=1;
    int number =1;
    for(i=0;i<10;i++)
    {
        while(j<10)
        {
            arr[i][j] = number++;
            j++;
        }
        while(k<10)
        {
            arr[k][j] = number++;
            k++;
        }
        while(j > i)
        {
            j--;
            arr[k][j] = number++;
        }
        while(k > i)
        {
            k--;
            arr[k][i] = number++;
        }

    }
    printf("%d",number);
    return 0;
}
