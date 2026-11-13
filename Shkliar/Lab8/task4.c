#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 20

void find(int a[], int *min, int *max, int *sum) {

    *min = a[0];
    *max = a[0];
    *sum = 0;

    for (int i = 1; i < ROW; i++) {
        if (a[i] < *min) {
            *min = a[i];
        }

        if (a[i] > *max) {
            *max = a[i];
        }
    }
    *sum = *min + *max;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a[ROW];
    int min, max, sum;

    srand(time(NULL));
    
    printf("Масив:\n");

    for (int i = 0; i < ROW; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    find(a, &min, &max, &sum);

    printf("\nМінімум = %d\n", min);
    printf("Максимум = %d\n", max);
    printf("Сума = %d\n", sum);

    return 0;
}