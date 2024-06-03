#include <stdio.h>
#include <stdlib.h>
int num1=4;
float num2=9.8;
char sn='d';
long int j=-450000;
unsigned long int k=6000000;
int main()
{
    printf("integer is %d\n floating type is %f\n",num1,num2);
     printf("long int is %ld\n unsigned long int  is %lu\n",j,k);
     printf("the character is: %s\n",&sn);
    return 0;
}
