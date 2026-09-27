#include <stdio.h>

double calculator(double opp1, double opp2, char op) {
    double result = 0;
    switch(op) {
        case '+':
            result = opp1 + opp2;
            break;
        case '-':
            result = opp1 - opp2;
            break;
        case '*':
            result = opp1 * opp2;
            break;
        case '/':
            if (opp2 == 0) {
                printf("Error: Division by zero\n");
                return 0;
            }
            result = opp1 / opp2;
            break;
        case '%':
            if ((int)opp2 == 0) {
                printf("Error: Division by zero\n");
                return 0;
            }
            result = (int)opp1 % (int)opp2;
            break;
    }
    return result;
}

int main() {
    //double opp1, opp2;
    //char op;
    //scanf("%lf %c %lf", &opp1, &op, &opp2);
    //double result = calculator(opp1, opp2, op);
    //printf("%lf\n", result);
    return 0;
}