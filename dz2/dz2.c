#include <stdio.h>

int main() {
    // оголошення змінних
    int num1, num2 ,num3;

    // введеня чисел з клавіатури
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // оголошення змінної max для зберігання максимального значення порівняння num1 та num2
    int max = 0;

    max = num1 > num2 ? num1 : num2;

    // перевірка чи є змінна max більшою за num3
    if(max > num3)
        printf("The maximum nuber is %d", max);
    else
        printf("The maximum number is %d", num3);
    
    return 0;
}