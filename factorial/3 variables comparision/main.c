//Both 'a 'and 'b' are greater than 'c' Both 'a' and 'b' are smaller than 'c'
#include <stdio.h>
#include <stdlib.h>
int a,b,c;
a=5;b=5;c=10;
int main()
{
    if(a>b && b>c)
    {
           printf("A AND B IS GREATER THAN C\n");
    }
 else
    printf("A AND B IS SMALLER THAN C\n");
    return 0;
}
