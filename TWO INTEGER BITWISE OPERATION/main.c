#include <stdio.h>
#include <stdlib.h>
int a,b;
int main(void)
{
    printf("Enter the values of A and B\n");
    scanf("%d%d",&a,&b);
    printf("a | b=%d\n",a|b);
    printf("a &b=%d\n",a&b);
    printf("a^b=%d\n",a^b);
    printf("a <<=%d\n",a<<1);
    printf("a>>=%d\n",a>>1);
    return 0;
}
//|, &, ^, <<, >>
