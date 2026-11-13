#include <stdio.h>

int main(void) {
    int num;
    printf("Введіть тризначне число (від 100 до 999): ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Помилка: число повинно бути тризначним!\n");
        return 1;
    }

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    // Виведення сотень
    switch (hundreds) {
        
        case 1: printf("Сто "); break;
        case 2: printf("Двісті "); break;
        case 3: printf("Триста "); break;
        case 4: printf("Чотириста "); break;
        case 5: printf("П'ятсот "); break;
        case 6: printf("Шістсот "); break;
        case 7: printf("Сімсот "); break;
        case 8: printf("Вісімсот "); break;
        case 9: printf("Дев'ятсот "); break;
    }

    // Обробка десятків (особливий випадок для чисел 10-19)
    if (tens == 1) {
        switch (units) {
            case 0: printf("десять\n"); break;
            case 1: printf("одинадцять\n"); break;
            case 2: printf("дванадцять\n"); break;
            case 3: printf("тринадцять\n"); break;
            case 4: printf("чотирнадцять\n"); break;
            case 5: printf("п'ятнадцять\n"); break;
            case 6: printf("шістнадцять\n"); break;
            case 7: printf("сімнадцять\n"); break;
            case 8: printf("вісімнадцять\n"); break;
            case 9: printf("дев'ятнадцять\n"); break;
        }
    } else {
        // Виведення десятків (якщо вони є)
        switch (tens) {
            case 2: printf("двадцять "); break;
            case 3: printf("тридцять "); break;
            case 4: printf("сорок "); break;
            case 5: printf("п'ятдесят "); break;
            case 6: printf("шістдесят "); break;
            case 7: printf("сімдесят "); break;
            case 8: printf("вісімдесят "); break;
            case 9: printf("дев'яносто "); break;
        }

        // Виведення одиниць (якщо десятки не дорівнювали 1)
        switch (units) {
            case 1: printf("один\n"); break;
            case 2: printf("два\n"); break;
            case 3: printf("три\n"); break;
            case 4: printf("чотири\n"); break;
            case 5: printf("п'ять\n"); break;
            case 6: printf("шість\n"); break;
            case 7: printf("сім\n"); break;
            case 8: printf("вісім\n"); break;
            case 9: printf("дев'ять\n"); break;
            case 0: printf("\n"); break;
        }
    }

    return 0;
}