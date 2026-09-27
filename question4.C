#include <stdio.h>

int main() {
    for(char i = 'a'; i <= 'z'; i++) {
        for(char j = 'a'; j <= 'z'; j++) {
            printf("www.%c%c.com\n", i, j);
        }
    }
}