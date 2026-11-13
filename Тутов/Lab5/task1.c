#include <stdio.h>
#include <locale.h>

int main() {
    // Встановлюємо українську локаль
    setlocale(LC_ALL, "Ukrainian");

    double a, b;
    printf("Введіть перше число (a): ");
    scanf("%lf", &a);
    printf("Введіть друге число (b): ");
    scanf("%lf", &b);

    // Використання тернарного оператора
    printf("Результат порівняння: ");
    (a > b) ? printf("Перше число більше за друге.\n") :
    (a < b) ? printf("Друге число більше за перше.\n") :
              printf("Числа рівні між собою.\n");

    return 0;
}
