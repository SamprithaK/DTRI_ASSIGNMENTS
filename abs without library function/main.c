#include <stdio.h>
#include <stdlib.h>
int num=-36;
int main(void)
{
    if(num<0)
    {
        num=-num;
    }
    printf("ABS=%d\n",num);
    return 0;
}
