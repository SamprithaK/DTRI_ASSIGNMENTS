#include <stdio.h>

int main() {
    float n;

    printf("Enter a number: ");
    scanf("%f", &n);

    if (fmod(n, 3) == 0) {
        printf("The number is a multiple of 3\n");
    }
    else if (fmod(n, 7) == 0) {
        printf("The number is a multiple of 7\n");
    }
    else {
        printf("The number is not a multiple of 3 and 7\n");
    }

    return 0;
}
