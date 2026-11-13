#include <stdio.h>
#include <windows.h>
int main(void) {

// кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 10;
    float b = 109.876;
    char symbol = 'c', string[10] = "abc";
    int c;
printf("Число = %d\n", a);
printf("---Цілі числа---\n");
          printf("Двійкове: ");
    for (c = 7; c >= 0; c--) 
        printf("[%d]", (a >> c) & 1);
        printf("\n");
printf("Вісімкове: [%o]\n", a);
printf("Десяткове: [%d]\n", a);
printf("Шістнадцяткове: [%x]\n", a);
// Дійсні
printf("\n");
printf("Число = %.3f\n", b);
printf("---Дійсні числа---\n");
printf("З плаваючою комою: [%f]\n", b);
printf("В експоненційній формі: [%e]\n", b);
printf("В гнучкій формі: [%g]\n", b);
// Стрічка, символ, вказівник
printf("Символ: [%c]\n", symbol);
printf("Стрічка: [%s]\n", string);
printf("Вказівник:[%p] \n");

return 0;
}