#include <stdio.h>
#include <math.h>

int main() {
    // оголошення змінної
    float num;

    // введеня числа з клавіатури
    printf("Enter the number: ");
    scanf("%f", &num);

    // результат взяття модуля від числа
    printf("abs(%f) = %d\n", num, abs(num));

    // результат взяття квадратного кореня від числа
    printf("sqrt(%f) = %f\n", num, sqrt(num));

    // результат округлення числа
    printf("round(%f) = %f\n", num, round(num));

    // результат округлення числа до гори
    printf("ceil(%f) = %f\n", num, ceil(num));

    // результат округлення числа до низу
    printf("floor(%f) = %f", num, floor(num));

    return 0;
}