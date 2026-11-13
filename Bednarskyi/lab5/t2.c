#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
double a, b, c;

    printf("Визначення типу трикутника\n");
    printf("Введіть довжини трьох сторін трикутника:");
    scanf("%lf %lf %lf", &a, &b, &c);

    
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Трикутник з такими сторонами не існує!\n");
        return 0;
    }

    
    printf("За сторонами трикутник: ");
    if (a == b && b == c) {
        printf("Рівносторонній\n");
    } else if (a == b || a == c || b == c) {
        printf("Рівнобедрений\n");
    } else {
        printf("Різносторонній\n");
    }

    double max_sq, sum_sq;
    if (a >= b && a >= c) {
        max_sq = a * a;
        sum_sq = b * b + c * c;
    } else if (b >= a && b >= c) {
        max_sq = b * b;
        sum_sq = a * a + c * c;
    } else {
        max_sq = c * c;
        sum_sq = a * a + b * b;
    }

    printf("За кутами трикутник: ");

    if (max_sq == sum_sq) {
        printf("Прямокутний\n");
    } else if (max_sq < sum_sq) {
        printf("Гострокутний\n");
    } else {
        printf("Тупокутний\n");
    }

    return 0;
}