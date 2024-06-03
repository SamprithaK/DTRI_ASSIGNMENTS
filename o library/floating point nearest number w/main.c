#include <stdio.h>
float num;
float round_num;
int main()
{
    printf("enter a floating number\n");
    scanf("%f",&num);
    round_num=(int)(num+0.5);
    printf("the nearest integer number %d",(int)round_num);
    return 0;
}
