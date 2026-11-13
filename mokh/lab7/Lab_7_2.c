#include <stdio.h>
#include <windows.h>

int rezultat(int number)
{
    if (number <= 8)
        return 8;
    else
        return number + rezultat(number - 1);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number = 100;

    printf("Результат: %d", rezultat(number));

    return 0;
}