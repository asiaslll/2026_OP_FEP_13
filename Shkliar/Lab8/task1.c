#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int* mas10() {
    static int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 100;
    }

    return a;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));
    int *a;
    a = mas10();

    printf("Масив:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}