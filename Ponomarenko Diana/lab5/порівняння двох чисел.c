#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>  

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;

    printf("Введіть два числа: (через пробіл) ");
    scanf("%d %d", &a, &b);

    (a == b) ? printf("Числа рівні\n") :
        ((a > b) ? printf("Перше число більше\n") : printf("Друге число більше\n"));

    return 0;
}