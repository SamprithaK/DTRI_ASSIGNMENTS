#include <stdio.h>
#include <stdlib.h>
int a;
int main()
{
    printf("Enter the number\n");
    scanf("%d",&a);
    (a%2==0)?(printf("%d is even  number",a)):(printf("%d is an odd number",a));
        return 0;
}
