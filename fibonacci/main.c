#include <stdio.h>
#include <stdlib.h>
int a,b,c,n;
a=0;
b=1;
int main()
{printf("Enter the number!\n");
  scanf("%d",&n);
    printf("%d %d\t",a,b);
    for(int i=0; i<n-2; i++)
    {
        c=a+b;
      //  printf("%d\t",c);
        a=b;
        b=c;
    }
    printf("%d\t",c);
    return 0;
}
