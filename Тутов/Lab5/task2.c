#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double sides[3];
    printf("Введіть довжини трьох сторін трикутника (наприклад: 3 4 5): ");
    scanf("%lf %lf %lf", &sides[0], &sides[1], &sides[2]);

    // Перевірка на існування трикутника
    if (sides[0] + sides[1] <= sides[2] || 
        sides[0] + sides[2] <= sides[1] || 
        sides[1] + sides[2] <= sides[0]) {
        printf("Помилка: трикутник з такими сторонами не може існувати!\n");
        return 0;
    }

    // а) Визначення типу за сторонами
    if (sides[0] == sides[1] && sides[1] == sides[2]) {
        printf("Тип за сторонами: рівносторонній (правильний).\n");
    } else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2]) {
        printf("Тип за сторонами: рівнобедрений.\n");
    } else {
        printf("Тип за сторонами: різносторонній.\n");
    }

    // Сортуємо три сторони за зростанням (щоб sides[2] була найбільшою)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (sides[j] > sides[j + 1]) {
                double temp = sides[j];
                sides[j] = sides[j + 1];
                sides[j + 1] = temp;
            }
        }
    }

    double a = sides[0];
    double b = sides[1];
    double c = sides[2];

    // б) Визначення типу за кутами
    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    if (a2 + b2 == c2) {
        printf("Тип за кутами: прямокутний.\n");
    } else if (a2 + b2 > c2) {
        printf("Тип за кутами: гострокутний.\n");
    } else {
        printf("Тип за кутами: тупокутний.\n");
    }

    return 0;
}
