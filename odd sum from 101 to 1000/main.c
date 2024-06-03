#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum=101;
    for(int i=102;i<=1000;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
