#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    double a, b;

    printf("Порівняння двох чисел\n");
    printf("Введіть перше число (a): ");
    scanf( "%lf", &a);
    printf("Введіть друге число (b): ");
    scanf("%lf", &b);

    (a == b) ? printf("Числа рівні (a == b)\n") :
    (a > b)  ? printf("Перше число більше (a > b)\n") :
    printf("Друге число більше (a < b)\n");
    return 0;
}