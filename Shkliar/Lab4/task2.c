#include <stdio.h>
#include <windows.h>

int main() {

// кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

int number;
int *pointer;
    printf("Введіть ціле число: ");
    scanf("%d", &number);
    printf("Адреса змінної: %p\n", (void*)&number);
    printf("Адреса через вказівник: %p\n", (void*)pointer);

    return 0;
}
