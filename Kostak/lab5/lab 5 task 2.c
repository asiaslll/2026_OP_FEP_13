#include <stdio.h>

int main() {
    double a, b, c;
    printf("Введіть три сторони трикутника: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Рівносторонній (правильний)\n");
        else if (a == b || a == c || b == c)
            printf("Рівнобедрений\n");
        else
            printf("Різносторонній\n");

        double max = a, x = b, y = c;
        if (b > max) { max = b; x = a; y = c; }
        if (c > max) { max = c; x = a; y = b; }

        double max2 = max * max;
        double sum2 = x * x + y * y;

        if (max2 == sum2)
            printf("Прямокутний\n");
        else if (max2 < sum2)
            printf("Гострокутний\n");
        else
            printf("Тупокутний\n");
    } else {
        printf("Трикутник з такими сторонами не існує\n");
    }

    return 0;
}