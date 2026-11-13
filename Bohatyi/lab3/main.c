#include <stdio.h>

int main (void)
{
    int number=55;
    printf("Десяткове:%d\n", number);
    printf("Двійкове:%b\n", number);
    printf("Вісімкове:%o\n", number);
    printf("Шістандцяткове:%x\n", number);
    
    double number2=12.34;
    printf("Плаваюче:%f\n", number2);
    printf("Експоненційне:%e\n", number2);
    printf("Гнучка:%g\n", number2);
    
    char symbol='A';
    printf("Символ:%c\n", symbol);
    
    char str[]="Стрічка";
    printf("Стрічка:%s\n", str);
    
    int b=2;
    int *a=&b;
    printf("Вказівник:%p\n", a);
    
    return 0;
}