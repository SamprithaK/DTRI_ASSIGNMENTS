#include <stdio.h>
#include <stdlib.h>
float area,peri,a,b;
int main()
{
    printf("Enter the length and Breadth of rectangle \n");
    scanf("%f%f",&a,&b);
    area=a*b;
    peri=(a+b)*2;
    printf("area=%f\n perimeter =%f\n",area,peri);
    return 0;
}
