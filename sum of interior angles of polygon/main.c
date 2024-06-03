#include <stdio.h>
#include <stdlib.h>
int n;
int main()
{
    printf("Enter the number of sides in the polygon\n");
    scanf("%d",&n);
    float sum=(n-2)*180;
    if (n==3)
    {
        printf("its a triangle\n");
        printf("the sum =%d",sum);
    }
    else if(n==4)
    {
       printf("its a quadralateral\n");
        printf("the sum =%d",sum);
    }
    else if (n==5)
    {
         printf("its a pentagon\n");
    }
    else if(n==6)
    {
         printf("hexagon\n");
    }
     else if(n==7)
    {
         printf("heptagon\n");
    }
     else if(n==8)
    {
         printf("octagon\n");
    }
     else if(n==9)
    {
         printf("Nanagon\n");
    }
    else
    {
        printf("decagon");
    }
     printf("the sum =%f",sum);
    return 0;
}
