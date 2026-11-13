#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void generate_random_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main(void) {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    srand((unsigned int)time(NULL));

    int my_array[10];
    generate_random_array(my_array, 10);

    printf("Масив із 10 випадкових чисел: \n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}