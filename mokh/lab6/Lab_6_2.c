#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int i = 1;
    int sum = 0;

    while (i <= 100)
    {
        i++;

        if (i == 8 || i == 33)
        {
            continue;
        }
        else
        {
            sum = sum + i;
        }
    }
    
    printf("—ума чисел в≥д 1 до 100 (без 8 та 33): %d", sum);

    return 0;
}