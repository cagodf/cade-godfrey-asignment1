#include <stdio.h>

int triProp(int a1, int a2, int a3){
    if (a1 + a2 +a3 != 180){
        printf("Invalid ");
        return 0;
    }
    if (a1 < 90 && a2 < 90 && a3 < 90){
        printf("Acute ");
    }
    else if (a1 == 90 || a2 == 90 || a3 == 90){
        printf("Right ");
    }
    else if (a1 > 90 || a2 > 90 || a3 > 90){
        printf("Obtuse ");
    }
    if (a1 == a2 || a2 == a3 || a1 == a3){
        printf("Isosceles ");
    }
    if (a1 == a2 && a2 == a3){
        printf("Equilateral");
    }
    return 1;
}

int main() {
    //printf("%d\n", triProp(100, 20, 60));
    //printf("%d\n", triProp(60, 60, 60));
    //printf("%d\n", triProp(90, 45, 45));
    //printf("%d\n", triProp(100, 40, 40));
    //printf("%d\n", triProp(70, 70, 40));
    //printf("%d\n", triProp(80, 50, 50));
    //printf("%d\n", triProp(61, 60, 60));
}