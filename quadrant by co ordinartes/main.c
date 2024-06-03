#include <stdio.h>
#include <stdlib.h>
int a=+3;
int b=-5;
int main()
{
    if( a>0 && b>0)
    {printf("the co ordinates lie in 1st quadrant");
    }
    else if (a>0 && b<0)
    {
        printf("the co ordinates lie in 2nd quadrant");
    }
     else if (a<0 && b<0)
    {
        printf("the co ordinates lie in 3rd quadrant");
    }
    else
        printf("the co ordinates lie in 4th quadrant");
    return 0;
}
