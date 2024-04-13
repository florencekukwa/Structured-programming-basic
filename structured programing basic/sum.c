#include <stdio.h>

int calculateDigitSum(int M ) {
    int sum = 0;

    while (M > 0) {
        sum += M % 10;
        M /= 10;
    }

    return sum;
}

int main() {
    int M;

    printf("Enter a three-digit number: ");
    scanf("%d", &M);

    int digitSum = calculateDigitSum(M);

    printf("The sum of digits is: %d\n", digitSum);

    return 0;
}