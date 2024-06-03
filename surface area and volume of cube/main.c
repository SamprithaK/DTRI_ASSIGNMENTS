#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float area,volume,side=10;
int main()
{
    area=6*pow(side,2);
    volume=pow(side,3);
    printf("THe surface area of the cube is %f\n volume =%f",area,volume);
    return 0;
}
