#include <stdio.h>

int answerPhone(int m, int mo, int s) {
    int morning = m;
    int mom = mo;
    int sleeping = s;
    
    if (sleeping == 1){
        return 0;
    }
    else if (morning == 1 && mom == 1){
        return 1;
    }
    else if (morning == 1){
        return 0;
    }
    return 1;
}

int main() {
    //printf("%d\n", answerPhone(1, 1, 1));
    //printf("%d\n", answerPhone(0, 1, 0));
    //printf("%d\n", answerPhone(0, 0, 0));
    //printf("%d\n", answerPhone(1, 1, 0));
    //printf("%d\n", answerPhone(1, 0, 0));
    return 0;
}