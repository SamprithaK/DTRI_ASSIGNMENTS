#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum=1;
    for(int i=2;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
