#include <stdio.h>

int main() {
    // оголошення змінних
    int num1, num2;

    // введеня чисел з клавіатури
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // результат додавання двох чисел
    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    // результат віднімання двох чисел
    printf("%d - %d = %d\n", num1, num2, num1 - num2);

    // результат множення двох чисел
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    // результат ділення двох чисел
    printf("%d / %d = %d\n", num1, num2, num1 / num2);

    // результат остачі від ділення двох чисел
    printf("%d %% %d = %d", num1, num2, num1 % num2);
    return 0;
}