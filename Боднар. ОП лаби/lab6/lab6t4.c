#include <stdio.h>

int main() {
    int N;
    float x;
    float sum = 0;
    float min;
    float max;
    float average;

    printf("Введіть N від 7 до 12: ");
    scanf("%d", &N);

    if (N < 7 || N > 12) {
        printf("Помилка! N має бути від 7 до 12.\n");
    }
    else {
        for (int a = 1; a <= N; a++) {
            printf("Введіть число %d: ", a);
            scanf("%f", &x);

            sum = sum + x;

            if (a == 1) {
                min = x;
                max = x;
            }
            else {
                if (x < min) {
                    min = x;
                }

                if (x > max) {
                    max = x;
                }
            }
        }

        average = sum / N;

        printf("Сума: %.2f\n", sum);
        printf("Середнє арифметичне: %.2f\n", average);
        printf("Мінімальне число: %.2f\n", min);
        printf("Максимальне число: %.2f\n", max);
    }

    return 0;
}