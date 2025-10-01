#include <stdio.h>

int main() {
    // оголошення змінних
    int x, a, b;

    
    scanf("%d %d %d", &x, &a, &b);

    // перевірка чи належить число x данному інтервалу
    if(x > a && x < b)
        printf("The number %d belongs to the interval (%d, %d)", x, a, b);
    else
        printf("The number %d doesn't belongs to the interval (%d, %d)", x, a, b);

    return 0;
}