#include <stdio.h>
#include <stdlib.h>

int main() {
    char s;

    printf("Enter any letter: ");
    scanf(" %c", &s); // Note the space before %c to skip leading whitespace if any

    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') {
        printf("The entered letter is a vowel.\n");
    }
    else {
        printf("The entered letter is not a vowel.\n");
    }

    return 0;
}
