#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, count = 0, num = 2;
printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);
        printf("First %d prime numbers are:\n", n);
    while (count < n)
        {
        int isPrime = 1; // Flag to track if 'num' is prime

        // Check if 'num' is prime
    for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // 'num' is not prime
                break;
            }
        }
        // If 'num' is prime, print it
        if (isPrime) {
            printf("%d ", num);
            count++; // Increment count of prime numbers found
        }
num++; // Move to the next number
    }
    return 0;
}
