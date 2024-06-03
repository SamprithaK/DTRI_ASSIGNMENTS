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
         for(int k=1;k<=4;k++)
         {
             printf("%d ",k);
         }
          printf("\n");
    }

    return 0;
}
