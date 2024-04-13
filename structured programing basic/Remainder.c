#include <stdio.h>

int Remainder(int dividend, int divisor) {
    while (dividend >= divisor) {
        dividend -= divisor;
    }
    return dividend;
}

int main() {
    int number1, number2;

    printf("Enter the dividend: ");
    scanf("%d", & number1);

    printf("Enter the divisor: ");
    scanf("%d", & number2);

    int remainder = Remainder(number1, number2);

    printf("The remainder is: %d\n", remainder);

    return 0;
}