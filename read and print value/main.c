#include <stdio.h>
#include <stdlib.h>
int num1;
float num2;
char sn;
long int j;
unsigned long int k;
int main()
{
    printf("ENTER the any 2 numbers\n");
    scanf("%d%f",&num1,&num2);
    printf("ENTER the any 2 numbers\n");
    scanf("%ld%lu",&j,&k);
    printf("enter the charcacter");
    scanf("%s",&sn);
    printf("integer is %d\n floating type is %f\n",num1,num2);
     printf("long int is %ld\n unsigned long int  is %lu\n",j,k);
     printf("the character is: %s\n",&sn);
    return 0;
}
