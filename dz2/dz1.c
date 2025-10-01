#include <stdio.h>

int main() {
    // оголошення змінних
    int x, a, b;

    // введення числа з клавіатури, для перевірки належності до інтервалу
    printf("Enter number: ");
    scanf("%d", &x);

    // введення чисел з клавіатури, задання інтервалу
    printf("Enter two numbers to set the interval: ");
    scanf("%d %d", &a, &b);

    // перевірка чи належить число x данному інтервалу
    if(x > a && x < b)
        printf("The number %d is in the interval (%d, %d)", x, a, b);
    else
        printf("The number %d is in the interval (%d, %d)", x, a, b);

    return 0;
}