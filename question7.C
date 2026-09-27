#include <stdio.h>

int reverseBinary(int n){
    if (n <= 0) {
        printf("Error: enter a non-negative integer.\n");
        return 0;
    }
    if (n == 1) {
        printf("0");
    }
    while (n > 0) {
        printf("%d", n % 2);
        n /= 2;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter a positive integer to convert to binary: ");
    scanf("%d", &n);
    reverseBinary(n);
    return 0;
}
