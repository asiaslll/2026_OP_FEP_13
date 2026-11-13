#include <stdio.h>
void input(int *ptr){
     if(scanf("%d",ptr)!=1){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        input(ptr);
        return;
    }
    return;
}
int a;
int main() {
    printf("Введіть трьохзначне число\n");
    input(&a);
    if(a<100||a>1000){
        printf("ЧИСЛО МАЄ БУТИ ТРЬОХЗНАЧНИМ!!!");
        return 0;
    }
    switch (a/100)
    {
    case 1:
        printf("Сто ");
        break;
     case 2:
        printf("двісті ");
        break;
     case 3:
        printf("Триста ");
        break;
     case 4:
        printf("Чотириста ");
        break;
     case 5:
        printf("Пятсот ");
        break;
     case 6:
        printf("Шістсот ");
        break;
     case 7:
        printf("Сімсот ");
        break;
     case 8:
        printf("Вісімсот ");
        break;
     case 9:
        printf("Девятстот ");
        break;
    }
    if((a%100)/10==1){
    switch (a%10){
    case 1:
        printf("одинадцять ");
        break;
     case 2:
        printf("дванадцять ");
        break;
     case 3:
        printf("тринадцять ");
        break;
     case 4:
        printf("чотирнадцять ");
        break;
     case 5:
        printf("пятнадцять ");
        break;
     case 6:
        printf("шістнадцять ");
        break;
     case 7:
        printf("сімнадцять ");
        break;
     case 8:
        printf("вісімнадцять ");
        break;
     case 9:
        printf("девятнадцять ");
        break;
    }
    return 0;
    }
    switch ((a%100)/10)
    {
     case 2:
        printf("двадцять ");
        break;
     case 3:
        printf("тридцять ");
        break;
     case 4:
        printf("сорок ");
        break;
     case 5:
        printf("пятдесят ");
        break;
     case 6:
        printf("шістдесять ");
        break;
     case 7:
        printf("сімдесять ");
        break;
     case 8:
        printf("вісімдесят ");
        break;
     case 9:
        printf("девяносто ");
        break;
    }switch ((a%100)%10)
    {
     case 1:
        printf("один ");
        break;
     case 2:
        printf("два ");
        break;
     case 3:
        printf("три ");
        break;
     case 4:
        printf("чотири ");
        break;
     case 5:
        printf("пять ");
        break;
     case 6:
        printf("шість ");
        break;
     case 7:
        printf("сім ");
        break;
     case 8:
        printf("вісім ");
        break;
     case 9:
        printf("девять ");
        break;
    }
    return 0;
}
