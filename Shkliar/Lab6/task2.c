#include <windows.h>
#include <stdio.h>

int main(void) {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

int number;
int i = 1;
int sum = 0;

printf("Введіть свій порядковий номер: ");
scanf("%d", &number);

while (i <= 100) {
if (i != number && i != 33){
sum += i;
}
i++;
}

printf("Сума %d\n", sum);
return 0;
}