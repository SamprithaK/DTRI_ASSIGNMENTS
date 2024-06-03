#include <stdio.h>
#include <stdlib.h>
int a=2;
int b=3;
int main()
{
   printf("%d\n",a&b);
   printf("%d\n",a|b);
   printf("%d\n",a^b);
   printf("%d\n",~b);
   printf("%d\n",a>>b);
   printf("%d\n",a<<b);
    return 0;
}
