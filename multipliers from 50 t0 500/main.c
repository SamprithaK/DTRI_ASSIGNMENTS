#include <stdio.h>
#include <stdlib.h>
int n,m;
int main()
{
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;;i++)
    {
        m=n*i;
        if(m>=50 && m<=500)
        {
            printf("%d ",m);
        }
        if(m>500)
        {
            return 0;
        }
    }
    return 0;
}
