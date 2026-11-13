#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    printf("Введіть число від 7 до 12: ");
    scanf_s("%d", &N);

    if (N < 7 || N > 12)
    {
        printf("Ви ввели невірно");
        return 1;
    }

    double sum = 0;
    double max;
    double min;
    double current_num;

    for (int i = 0; i < N; i++)
    {
        printf("\nВведіть число: ");
        scanf_s("%lf", &current_num);

        sum = sum + current_num;

        if (i == 0)
        {
            max = current_num;
            min = current_num;
        }
        if (current_num < min)
        {
            min = current_num;
        }
        if (current_num > max)
        {
            max = current_num;
        }
    }

    double average = sum / N;

    printf("\nСума чисел: %lf" , sum);
    printf("\nСереднє арифметичне: %lf" , average);
    printf("\nМінімальне значення: %lf" , min);
    printf("\nМаксимальне значення: %lf" , max);

    return 0;
}