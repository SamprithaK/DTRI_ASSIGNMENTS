#include <stdio.h>
#include <stdlib.h>
int a;
int b;
int main()
{
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
   /* a=a+b;//6
    b=a-b;//6-5=4;
    a=a-b;//6-4-----------------------------------sum and difference
    a=a*b;
    b=a/b;
    a=a/b;---------------------------------------multiply and divide*/
    a=a^b;
    b=a^b;
    a=a^b;//---------XOR
    printf("The value of a=%d the value of b=%d\n",a,b);
    return 0;
}
