#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i;//initialize
    int isPrime = 1;//a variable
    printf("Enter a number: ");
    scanf("%d", &num);//store a variable
    if (num == 2)
    {
        printf("%d is a prime number.\n", num);
    }//only prime even number
    else
    {
        for (i = 2; i <= num ; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;//since even make variable 0
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }
    return 0;
}
