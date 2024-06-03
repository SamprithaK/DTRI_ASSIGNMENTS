#include <stdio.h>
#include <stdlib.h>
int fact=1,n;
int main()
{
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
     fact=fact*i;
    printf("%d\n",fact);
    return 0;
}
