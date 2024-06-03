#include <stdio.h>
#include <stdlib.h>
float y;
int main()
{
    printf("enter a float value\n");
    scanf("%f",&y);
    printf("%.6f\n",y);
    printf("%.5f\n",y);
    printf("%.4f\n",y);
    printf("%.3f\n",y);
    printf("%.2f\n",y);
    printf("%.1f\n",y);
    return 0;
}
