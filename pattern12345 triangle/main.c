#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    for(int i=1; i<=5; i++)// 5 rows
    {
        for(int j=1; j<=i; j++)//5 columns
        {
            printf("%d",j);//change /incfrement the values columnwise
        }
        printf("\n");//till 5th line
    }

    for(int i=4; i>=1; i--)//
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
