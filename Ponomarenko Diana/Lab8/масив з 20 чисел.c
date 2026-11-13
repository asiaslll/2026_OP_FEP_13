#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void find_min_max_and_sum(int arr[], int size) {
    if (size <= 0) return;

    int min = arr[0]; 
    int max = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int sum = min + max;

    printf("Мінімальний елемент масиву: %d\n", min);
    printf("Максимальний елемент масиву: %d\n", max);
    printf("Сума мінімального та максимального: %d + %d = %d\n", min, max, sum);
}

int main(void) {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    srand((unsigned int)time(NULL));

    int arr[20]; 

    printf("Масив із 20 випадкових чисел:\n");
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100; 
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    find_min_max_and_sum(arr, 20);

    return 0;
}