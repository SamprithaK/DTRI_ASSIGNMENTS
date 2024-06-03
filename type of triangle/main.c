#include <stdio.h>
#include <stdlib.h>
int a,b,c;
int main()
{
    for (int i=0;i<4;i++)
    {
    printf("Enter the 3 sides of triangle!\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && a==c)
    {
        printf("Equilateral triangle\n");
    }
    else if (a==!b || a==!c)
    {
        printf("Scalene triangle\n");
    }
    else
    {
        printf("Isoceleus triangle\n");
    }
}    return 0;
}
