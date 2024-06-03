#include <stdio.h>
#include <stdlib.h>
int s,m;
int main()
{
    for(m=0;m<=59;m++)
    {
        for(s=0;s<=59;s++)
    {
        printf("%d:%d\n",m,s);
        sleep(1);
    }
    }
    return 0;
}
