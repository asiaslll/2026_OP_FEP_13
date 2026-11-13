#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Введіть довжини трьох сторін трикутника: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Похідні дані введено некоректно!\n");
        return 1;
    }

    // Перевірка на нерівність трикутника
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Трикутник із такими сторонами не існує!\n");
        return 0;
    }

    // 1. Визначення типу за сторонами
    if (a == b && b == c) {
        printf("Тип за сторонами: Рівносторонній (правильний)\n");
    } else if (a == b || b == c || a == c) {
        printf("Тип за сторонами: Рівнобедрений\n");
    } else {
        printf("Тип за сторонами: Різносторонній\n");
    }

    // 2. Сортування сторін, щоб c була найбільшою
    double temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }

    // 3. Визначення типу за кутами
    double eps = 1e-9; // Мала похибка для порівняння дробових чисел
    double c2 = c * c;
    double ab2 = a * a + b * b;

    if (fabs(c2 - ab2) < eps) {
        printf("Тип за кутами: Прямокутний\n");
    } else if (c2 > ab2) {
        printf("Тип за кутами: Тупокутний\n");
    } else {
        printf("Тип за кутами: Гострокутний\n");
    }

    return 0;
}