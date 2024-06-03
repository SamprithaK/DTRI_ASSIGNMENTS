#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float num1,num2;
int main()
{
    printf("Enter two number\n");
    scanf("%f%f",&num1,&num2);
    float max=fmax(num1,num2);
    float min=fmin(num1,num2);
    float power=pow(num1,num2);
    float fab_s=fabs(num1);
    float abs_=abs(num1);
    int floor_=floor(num2);
    int ceil_=ceil(num2);
    printf("the max value is %f\n",max);
    printf("the min value is %f\n",min);
    printf("the %f power %f value is %f\n",num1,num2,power);
    printf("the fabs value is %f\n",fab_s);
    printf("the abs value is %f\n",abs_);
     printf("the floor value is %d\n",floor_);
    printf("the ciel value is %d\n",ceil_);
    return 0;
}
