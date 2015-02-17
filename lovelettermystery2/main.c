#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[50],*p;
    int length,h_len,i=0,changes=0,testcases;
    int c1,c2,j;
    scanf("%d",&testcases);
    while(testcases>0)
    {
        i=0;
        j=0;
       // *p= NULL;
        length =0;
        changes =0;
       //printf("enter the string\n");
    scanf("%s",str);
    length = strlen(str);
    h_len = length/2;
    p = str;
   // while(*p != '\0')
    //{
        while(i<h_len)
        {
            c1 = *(p+i);
            c2 = *(p+(length-1)-i);
            j = c2-c1;
            if((c2-c1) >= 0)
            {
              changes = changes + (c2-c1);
            }
            else{
                changes = changes + (c1-c2);
            }
            i++;
        }
   // }

   printf("%d\n",changes);
    testcases--;
    }
    return 0;
}
