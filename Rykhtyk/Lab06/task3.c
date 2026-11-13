#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    int Num;
    float current, summ = 0.0;
    float min, max;

    do {
        printf("Введіть суму цілих чисел від 7 до 12:");
        scanf("%d", &Num);
    } while (Num < 7 || Num > 12);

    for (int i = 1; i <= Num; i++) {
        printf("Введіть число №%d: ", i);
        scanf("%f", &current);

        summ += current;

        if (i == 1) {
            min = current;
            max = current;
        } else {
            if (current < min) min = current;
            if (current > max) max = current;
        }
    }
    float avg = summ / Num;
    printf("\nСума: %f\nСереднє: %f\nMin: %f\nMax: %f\n", summ, avg, min, max);

    return 0;
}