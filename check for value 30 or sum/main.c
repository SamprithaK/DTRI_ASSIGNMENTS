#include <stdio.h>
#include <stdlib.h>
int a,b;
int main()
{
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    if((a|b==30) ||(a+b==30))
    {
        printf("30 is present\n");
    }
    else printf("30 is not present");
    return 0;
}
