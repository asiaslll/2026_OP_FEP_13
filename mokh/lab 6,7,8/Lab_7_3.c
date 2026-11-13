#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h>

bool rezultat(double min, double max)
{
    if (8 * (min + max) / 2 + 17 > 0)
        return true;
    else
        return false;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double min = -100;
    double max = 100;
    double epsilon = 0.001;

    while (fabs(min - max) > epsilon)
    {
        if (rezultat(min, max))
            max = (min + max) / 2;
        else
            min = (min + max) / 2;
    }

    printf("Результат: %lf", (min + max) / 2);

    return 0;
}