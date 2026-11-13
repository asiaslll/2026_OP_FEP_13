#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    int num;

    printf("Вивід тризначного числа прописом\n");
    printf("Введіть тризначне число (100 - 999): ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Помилка: введене число не є тризначним\n");
        return 0;
    }

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    printf("Число прописом: ");

    switch (hundreds) {
        case 1: printf("сто "); break;
        case 2: printf("двісті "); break;
        case 3: printf("триста "); break;
        case 4: printf("чотириста "); break;
        case 5: printf("п'ятсот "); break;
        case 6: printf("шістсот "); break;
        case 7: printf("сімсот "); break;
        case 8: printf("вісімсот "); break;
        case 9: printf("дев'ятсот "); break;
    }

    switch (tens) {
        case 1:
            switch (units) {
                case 0: printf("десять"); break;
                case 1: printf("одинадцять"); break;
                case 2: printf("дванадцять"); break;
                case 3: printf("тринадцять"); break;
                case 4: printf("чотирнадцять"); break;
                case 5: printf("п'ятнадцять"); break;
                case 6: printf("шістнадцять"); break;
                case 7: printf("сімнадцять"); break;
                case 8: printf("вісімнадцять"); break;
                case 9: printf("дев'ятнадцять"); break;
            }
            break;

        case 2: printf("двадцять "); break;
        case 3: printf("тридцять "); break;
        case 4: printf("сорок "); break;
        case 5: printf("п'ятдесят "); break;
        case 6: printf("шістдесят "); break;
        case 7: printf("сімдесят "); break;
        case 8: printf("вісімдесят "); break;
        case 9: printf("дев'яносто "); break;
    }

    if (tens != 1) {
        switch (units) {
            case 1: printf("один"); break;
            case 2: printf("два"); break;
            case 3: printf("три"); break;
            case 4: printf("чотири"); break;
            case 5: printf("п'ять"); break;
            case 6: printf("шість"); break;
            case 7: printf("сім"); break;
            case 8: printf("вісім"); break;
            case 9: printf("дев'ять"); break;
            default: break;
        }
    }

    return 0;
}