#include <stdio.h>
#include <stdlib.h>
int x1,x2,y1,y2;
float slope;
int main()
{
    printf("Enter the cordinates of line1\n");
    scanf("%d%d",&x1,&x2);
    printf("Enter the cordinates of line1\n");
    scanf("%d%d",&y1,&y2);
    slope=(y2-y1)/(x2-x1);
    printf("the slope value is %.3f",slope);
    return 0;
}
