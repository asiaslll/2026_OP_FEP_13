#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Введіть тризначне число: ");
    scanf("%d", &n);

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    switch (a) {
    case 1:
        printf("Сто");
        break;
    case 2:
        printf("Двісті");
        break;
    case 3:
        printf("Триста");
        break;
    case 4:
        printf("Чотириста");
        break;
    case 5:
        printf("Пятсот");
        break;
    case 6:
        printf("Шістсот");
        break;
    case 7:
        printf("Сімсот");
        break;
    case 8:
        printf("Вісімсот");
        break;
    case 9:
        printf("Девятсот");
        break;
    }
    if (b == 1) {
        switch (c) {
        case 0: 
            printf("Десять"); 
            break;
        case 1: 
            printf("Одинадцять"); 
            break;
        case 2: 
            printf("Дванадцять"); 
            break;
        case 3: 
            printf("Тринадцять"); 
            break;
        case 4: 
            printf("Чотирнадцять"); 
            break;
        case 5: 
            printf("П'ятнадцять"); 
            break;
        case 6: 
            printf("Шістнадцять"); 
            break;
        case 7: 
            printf("Сімнадцять"); 
            break;
        case 8: 
            printf("Вісімнадцять"); 
            break;
        case 9: printf("Дев'ятнадцять"); 
            break;
        }
    }
    else {
        switch (b) {
        case 2: 
            printf("Двадцять "); 
            break;
        case 3: 
            printf("Тридцять "); 
            break;
        case 4: 
            printf("Сорок "); 
            break;
        case 5: 
            printf("П'ятдесят "); 
            break;
        case 6: 
            printf("Шістдесят "); 
            break;
        case 7: 
            printf("Сімдесят "); 
            break;
        case 8: 
            printf("Вісімдесят "); 
            break;
        case 9: 
            printf("Дев'яносто "); 
            break;
        }

        switch (c) {
        case 1: 
            printf("Один"); 
            break;
        case 2: 
            printf("Два"); 
            break;
        case 3: 
            printf("Три"); 
            break;
        case 4: 
            printf("Чотири"); 
            break;
        case 5: 
            printf("П'ять"); 
            break;
        case 6: 
            printf("Шість"); 
            break;
        case 7: 
            printf("Сім"); 
            break;
        case 8: 
            printf("Вісім"); 
            break;
        case 9: 
            printf("Дев'ять"); 
            break;
        }
    }

    printf("\n");
    return 0;

}

