#include <stdio.h>
#include <stdlib.h>
int samsung,apple,vivo,oneplus,xiomi,minamount,maxamount;
samsung=25000;
apple=80000;
vivo=22000;
oneplus=65000;
xiomi=34000;
int main()
{
    printf("Enter  min amount\n");
    scanf("%d",&minamount);
      printf("Enter  max amount\n");
    scanf("%d",&maxamount);
    if(samsung=>minamount && samsung<maxamount)
    {
        printf("the brand is samsung\n");
    }
    else if(vivo>minamount && vivo<maxamount)
    {
        printf("the brand is vivo\n");
    }
    else if(apple>minamount && apple<maxamount)
    {
        printf("the brand is apple\n");
    }
    else if(oneplus>minamount && samsung<oneplus)
    {
        printf("the brand is oneplus\n");
    }
    else
    {
        printf("the brand is Xiomi\n");
    }
    return 0;
}
