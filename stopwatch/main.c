#include <stdio.h>
#include <stdlib.h>
int m,s;
int main()
{
    printf("Enter the minutes value\n");
    scanf("%d",&m);
    s=m*60;
    for(int sec=s;sec>=0;sec--)
    {
        printf("%d\n",sec);
        sleep(1);
    }
    return 0;
}
