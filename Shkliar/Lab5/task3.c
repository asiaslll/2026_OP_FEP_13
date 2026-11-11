#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c, d, e;

    printf("Введіть число від 100 до 999: ");
    scanf("%d", &a);

    if (a < 100 || a > 999) {
        printf("Число не задовольняє умові.");
        return 0;
    }

    b = a / 100;
    c = a % 100;

    switch (b) {
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

    if (c >= 10 && c <= 19) {
        switch (c) {
            case 10: printf("десять"); break;
            case 11: printf("одинадцять"); break;
            case 12: printf("дванадцять"); break;
            case 13: printf("тринадцять"); break;
            case 14: printf("чотирнадцять"); break;
            case 15: printf("п'ятнадцять"); break;
            case 16: printf("шістнадцять"); break;
            case 17: printf("сімнадцять"); break;
            case 18: printf("вісімнадцять"); break;
            case 19: printf("дев'ятнадцять"); break;
        }
    }
    else {
        d = c / 10;
        e = c % 10;

        if (d == 2) printf("двадцять ");
        if (d == 3) printf("тридцять ");
        if (d == 4) printf("сорок ");
        if (d == 5) printf("п'ятдесят ");
        if (d == 6) printf("шістдесят ");
        if (d == 7) printf("сімдесят ");
        if (d == 8) printf("вісімдесят ");
        if (d == 9) printf("дев'яносто ");

        if (e == 1) printf("один");
        if (e == 2) printf("два");
        if (e == 3) printf("три");
        if (e == 4) printf("чотири");
        if (e == 5) printf("п'ять");
        if (e == 6) printf("шість");
        if (e == 7) printf("сім");
        if (e == 8) printf("вісім");
        if (e == 9) printf("дев'ять");
    }

    printf("\n");

    return 0;
}