#include <stdio.h>
#include <math.h>

int primeFactorization(int n) {
    if (n < 2) {
        printf("Please enter a positive integer greater than 1.\n");
        return 0;
    }
    while (n % 2 == 0){
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2)
        printf("%d ", n);
    return 0;
}

int main() {
    int n;
    printf("Enter a positive integer to find the prime factors of: ");
    scanf("%d", &n);
    primeFactorization(n);
    return 0;
}