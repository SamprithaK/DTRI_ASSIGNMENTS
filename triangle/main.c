#include <stdio.h>
#include <stdlib.h>
int num,space;
int main()
{
    for(num=1;num<=4;num++)
    {
        for(space=1;space<num;space++)
{
    printf(" ");
}
printf("%d\n",num);
    }
    for(num=3;num>=1;num--)
    {
        for(space=1;space<num;space++)
{
    printf(" ");
}
printf("%d\n",num);
    }
    return 0;
}
