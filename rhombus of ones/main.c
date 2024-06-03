#include <stdio.h>
#include <stdlib.h>
int i,j;
int main()
{
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
         printf("1");
         printf("\n");
    }
     for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j++)
        {
            printf(" ");
        }
        printf("1");
        printf("\n");
    }
    return 0;
}
