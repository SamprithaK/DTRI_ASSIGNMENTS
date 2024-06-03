#include <stdio.h>

int main() {
    int integerNumber = 123;
    float floatNumber = 123.456789;

    // Length field demonstration
    printf("Length field demonstration:\n");
    printf("Integer: |%10d|\n", integerNumber);
    printf("Float:   |%10f|\n", floatNumber);
    printf("\n");

    // Width field demonstration
    printf("Width field demonstration:\n");
    printf("Integer: |%5d|\n", integerNumber);
    printf("Float:   |%5.2f|\n", floatNumber);
    printf("\n");

    // Precision field demonstration
    printf("Precision field demonstration:\n");
    printf("Float:   |%.2f|\n", floatNumber);
    printf("\n");

    return 0;
}
