#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    for(int i=1; i<=5; i++)// 5 rows
    {
        for(int j=i; j>=1; j--)//5 columns
        {
            printf("%d",j);//change /incfrement the values columnwise
        }
        printf("\n");//till 5th line
    }
   for(int i=6;i<=9;i++)
        {
            for(int j=10-i;j>=1;j--)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    return 0;
}
