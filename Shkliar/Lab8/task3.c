#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 12
#define COL 12

int* element(int a[ROW][COL], int n, int m) {
    if (n < 0 || n >= ROW || m < 0 || m >= COL) {
        return NULL;
    }

    return &a[n][m];
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int a[ROW][COL];
    int row, col;

    srand(time(NULL));

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            a[i][j] = rand() % 100;
             printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Введіть номер рядка (0-%d): ", ROW - 1);
    scanf("%d", &row);
    printf("Введіть номер стовпця (0-%d): ", COL - 1);
    scanf("%d", &col);

    int *p = element(a, row, col);

    if (p != NULL) {
        printf("Адрес елемента = %p\n", (void *)p);
        printf("Значення: %d\n", *p);
    } else {
        printf("Елемент не знайдено");
    }

    return 0;
}