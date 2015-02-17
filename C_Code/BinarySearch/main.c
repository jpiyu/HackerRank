#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("THIS IS A PROGRAM OF BINARY SEARCH.... TO EXECUTE THIS PROGRAM YOU HAVE TO ENTER A SORTED ARRAY");
    int i,element,index;
    int arr[8];
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&element);
    index = binary_search(arr,element);
    printf("\n%d\n",index);
    return 0;
}
int binary_search(int arr[],int element)
{
    int up = 8,low=0;
    while(low <= up)
    {
    int mid = (up+low)/2;
    if(element < arr[mid])
    {
        up = mid-1;
    }
    else if(element > arr[mid])
    {
        low = mid+1;
    }
    else
    {
        return mid;
    }
    }

}
