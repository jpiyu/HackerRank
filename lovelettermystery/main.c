#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50],*p;
    int length,h_len,i=0,changes=0;
    int c1,c2;
    printf("enter the string\n");
    gets(str);
    length = strlen(str);
    h_len = length/2;
    p = str;
   // while(*p != '\0')
    //{
        while(i<h_len)
        {
            printf("helo");
            c1 = *(p+i);
            c2 = *(p+(length-1)-i);
            //changes = changes + (c1-c2);
            printf("%c %c\n",c1,c2);
            i++;
        }
   // }

   //printf("%d",changes);
    return 0;
}
