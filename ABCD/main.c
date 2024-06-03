#include <stdio.h>
#include <stdlib.h>
int letter[]={65,98,67,100};
int main()
{
    for(int i=0;i<4;i++)
    {
        for (int j=1;j<=4;j++)
        {
            printf("%c ",letter[i]);
        }
         printf("\n");
    }

    return 0;
}
