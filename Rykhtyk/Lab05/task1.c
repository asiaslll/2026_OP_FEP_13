#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n1, n2;

    printf("Введіть перше число: ");
    scanf("%d", &n1);

    printf("Введіть друге число: ");
    scanf("%d", &n2);

    n1 > n2 ? printf("Перше число більше\n") :
    n1 < n2 ? printf("Друге число більше\n") :
            printf("Числа рівні\n");

    return 0;
}