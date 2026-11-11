#include <stdio.h>
#include <windows.h>

int main(void) {
    // кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b;

printf("Введіть число а: ");
scanf("%f", &a);
printf("Введіть число b: ");
scanf("%f", &b);

(a > b) ? printf("a більше за b") : 
(a < b) ? printf("a менше за b") :
printf("числа однакові");

    return 0;


}