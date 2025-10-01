#include <stdio.h>

int main() {
    int a, b ,c;

    scanf("%d %d %d", &a, &b, &c);

    int max = 0;

    if(a > b && a > c)
        max = a;
    else if(b > a && b > c)
        max = b;
    else
        max = c > a && c > b ? c : max;
    
    printf("The maximum number is %d", max);
}