#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a, i;
    int c = 0;
    int w = 0;
    srand(time(NULL));
    for (i = 0; i <= 6; i++) {
        int a = rand() % 7;

        if (a == 0) {
            w = w + 1;
            printf("OUT\n");
        } else if (a == 1) {
            printf("SINGLE\n");
        } else if (a == 2) {
            printf("DOUBLE\n");
        } else if (a == 3) {
            printf("THREE RUNS\n");
        } else if (a == 4) {
            printf("ITS A FOUR\n");
            c = c + 1;
        } else if (a == 5) {
            printf("ITS A FIVE\n");
        } else if (a == 6) {
            printf("SIX\n");
            c = c + 1;
        }
    }
    printf("Boundary count = %d\n", c);
    printf("Wickets: %d\n", w);
    return 0;
}
