#include <stdio.h>

int reverseFizzBuzz(int n) {
    if (n < 1) {
        printf("Invalid input. Please enter a positive integer greater than 0.\n");
        return 0;
    }
    int newline = 0;
    for (int i = n; i >= 1; i--) {
        if (i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz ");}
        else if (i % 3 == 0){
            printf("Fizz ");}
        else if (i % 5 == 0){
            printf("Buzz ");}
        else{
            printf("%d ", i);}
        if (newline >= 4) {
            printf("\n");
            newline = 0;
        } else {
            newline++;
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the starting fizzbuzz number: ");
    scanf("%d", &n);
    reverseFizzBuzz(n);
    return 0;
}