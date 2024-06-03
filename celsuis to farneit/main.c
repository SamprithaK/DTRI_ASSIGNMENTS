//F=(c*9/5)+32
//c=(f-32)*5/9
#include <stdio.h>
#include <stdlib.h>
int s;
float c,cel,far,f;
int main()
{
    printf("Enter 1 for C------>f \n");
    scanf("%d",&s);
    printf("Enter c in degree-");
    scanf("%f",&c);
    far=(c*(9/5))+32;
     printf("Enter F -");
    scanf("%f",&f);
    cel=(f-32)*(5/9);
    (s==1)?(printf("%f degree=%f f",c,far)):(printf("%f f =%f degree",f,cel));
    return 0;
}
