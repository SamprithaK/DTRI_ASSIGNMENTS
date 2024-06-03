#include <stdio.h>
#include <stdlib.h>
int letter[]={65,66,67,68};
int main()
{
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%c ",letter[j]);
        }
         printf("\n");
         for(int k=97;k<=100;k++)
         {
             printf("%c ",k);
         }
          printf("\n");
    }

    return 0;
}
