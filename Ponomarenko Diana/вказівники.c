#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int* get_1d_element(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        return NULL; 
    }
    return &arr[index]; 
}

int* get_2d_element(int mat[12][12], int rows, int cols, int r_idx, int c_idx) {
    if (r_idx < 0 || r_idx >= rows || c_idx < 0 || c_idx >= cols) {
        return NULL; 
    }
    return &mat[r_idx][c_idx];
}

int main(void) {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int arr_1d[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int target_idx = 3;

    int* ptr1 = get_1d_element(arr_1d, 10, target_idx);
    if (ptr1 != NULL) {
        printf("Одномірний масив: елемент з індексом %d дорівнює %d (адреса: %p)\n", target_idx, *ptr1, (void*)ptr1);
    } else {
        printf("Помилка: індекс поза межами одномірного масиву.\n");
    }

    int mat_2d[12][12];
    mat_2d[5][7] = 555; 

    int row_target = 5;
    int col_target = 7;

    int* ptr2 = get_2d_element(mat_2d, 12, 12, row_target, col_target);
    if (ptr2 != NULL) {
        printf("Двомірний масив [12x12]: знайдено елемент = %d за адресою %p\n", *ptr2, (void*)ptr2);
    } else {
        printf("NULL: елемент відсутній (виходить за межі матриці).\n");
    }

    return 0;
}