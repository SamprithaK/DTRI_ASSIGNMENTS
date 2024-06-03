#include <stdio.h>

int main()
{
    int a, b, c, largest;// Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? ((a>c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);
    return 0;
}
