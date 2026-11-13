#include <stdio.h>

int main (void)
{
    char name[50];
    char email[50];
    char color[50];
    printf("Заповніть дані.\n");
    printf("Прізвище та ініціали:");
    scanf("%49[^\n]", name);
    
    printf("Ел. пошта:");
    scanf("%49s", email);
    
    printf("Улюбленний колір:");
    scanf("%29s", color);
    
    printf("%-1s %-20s %-32s %-15s\n", "№ |", "Прізвище та ініціали |", "Ел.пошта", "| Улюбленний колір |");
    printf("%-7d %-27s %-31s %-15s\n", 1, name, email, color);
    
    return 0;
}