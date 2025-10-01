#include <stdio.h>
#include <math.h>

int main() {
    // оголошення змінної
    double angle;
    const double pi = 3.141592653589793;

    // введеня градусів з клавіатури
    printf("Enter your angle in degrees: ");
    scanf("%lf", &angle);

    // переведення градусів у радіани
    double radians = (angle * pi) / 180;
    printf("The angle in radians %lf\n", radians);

    printf("Choose the operation with your angle\n1.sin(x)\t2.cos(x)\n3.tan(x)\t4.cot(x)\nType number here: ");

    // оголошення змінної, яка відповідає за вибір тригонометричної функції
    int num;
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("sin(%lf) = %lf\n", angle, sin(radians));
            break;

        case 2:
            printf("cos(%lf) = %lf\n", angle, cos(radians));
            break;

        case 3:
            // обробка випадку коли тангенсу не існує (косинус = 0)
            if((int)angle % 90 == 0 && (int)angle != 0)
                printf("tan(%lf) = -\n", angle);
            else
                printf("tan(%lf) = %lf\n", angle, sin(radians) / cos(radians));
            break;

        case 4:
            // обробка випадку коли котангенсу не існує (синус = 0)
            if((int)angle % 180 == 0)
                printf("cot(%lf) = -\n", angle);
            else
                printf("cot(%lf) = %lf\n", angle, cos(radians) / sin(radians));
            break;

        default: printf("No such operation\n");
            break;
    }
    return 0;
}