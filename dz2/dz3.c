#include <stdio.h>
#include <math.h>

int main() {
    // оголошення змінної
    double angle;

    // введеня градусів з клавіатури
    printf("Enter your angle: ");
    scanf("%lf", &angle);

    // переведення градусів у радіани
    double radians = (angle * 3.14) / 180;
    printf("The angle in radians %lf\n", radians);

    printf("Choose the operation with your angle\n1.sin(x)\n2.cos(x)\n3.tan(x)\n4.cot(x)\n");

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
            if(angle % 90 == 0)
                printf("tan(%lf) = -\n", angle);
            else
                printf("tan(%lf) = %lf\n", angle, sin(radians) / cos(radians));
            break;

        case 4:
            if(angle % 180 == 0)
                printf("cot(%lf) = -\n", angle);
            else
                printf("cot(%lf) = %lf\n", angle, cos(radians) / sin(radians));
            break;

        default: printf("No such operation\n");
            break;
    }
}