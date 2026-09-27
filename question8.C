#include <stdio.h>
int main() {
    int num;
    char m;

    scanf("%d", &num);
    scanf(" %c", &m);

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    if (m == 'e'){
      d1 = (d1 + 7) % 10;
      d2 = (d2 + 7) % 10; 
      d3 = (d3 + 7) % 10;
      d4 = (d4 + 7) % 10;

    int t1 = d1;
    int t2 = d2;
    d1 = d3;
    d2 = d4;
    d3 = t1;
    d4 = t2;

    printf("Encrypted number: %04d\n", d1 * 1000 + d2 * 100 + d3 * 10 + d4);
    }
    else if (m == 'd') {
       int t1 = d1;
        int t2 = d2;
       d1 = d3;
       d2 = d4;
       d3 = t1;
       d4 = t2;

       d1 = (d1 + 3) % 10;
        d2 = (d2 + 3) % 10; 
       d3 = (d3 + 3) % 10;
       d4 = (d4 + 3) % 10;

      printf("Decrypted number: %04d\n", d1 * 1000 + d2 * 100 + d3 * 10 + d4);
    }
    return 0;
}