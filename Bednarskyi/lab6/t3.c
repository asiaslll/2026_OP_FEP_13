#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    int N;
    float current, sum = 0.0;
    float min, max;

    do {
        printf("введіть суму цілих чисел від 7 до 12: ");
        scanf("%d", &N);
    } while (N < 7 || N > 12);

    for (int i = 1; i <= N; i++) {
        printf("Введіть число №%d: ", i);
        scanf("%f", &current);

        sum += current;

        if (i == 1) {
            min = current;
            max = current;
        } else {
            if (current < min) min = current;
            if (current > max) max = current;
        }
    }

    float avg = sum / N;
    printf("\nСума: %f\nСереднє: %f\nMin: %f\nMax: %f\n", sum, avg, min, max);

    return 0;
}