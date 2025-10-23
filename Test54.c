// Write a program to print all the prime numbers from 1 to n. 


#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; 

        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
