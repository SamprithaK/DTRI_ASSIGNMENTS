#include <stdio.h>
int main(void) {
    int unit;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &unit);

    if (unit <= 199) {
        bill = unit * 1.20;
    } else if (unit >= 200 && unit <= 399) {
        bill = 199 * 1.20 + (unit - 199) * 1.50;
    } else if (unit >= 400 && unit <= 599) {
        bill = 199 * 1.20 + 200 * 1.50 + (unit - 399) * 1.80;
    } else {
        bill = 199 * 1.20 + 200 * 1.50 + 200 * 1.80 + (unit - 599) * 2.00;
    }

    if (bill < 100) {
        bill = 100;
    } else if (bill > 400) {
        bill = bill + (0.15 * bill);
    }

    printf("Electricity bill: Rs. %.2f\n", bill);

    return 0;
}
