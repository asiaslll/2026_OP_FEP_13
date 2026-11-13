#include <stdio.h>
#include <windows.h>
#define MAX 20

int main(void) {
// кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
int n, i;

    char surname[MAX][25],name[MAX][10],email[MAX][30],color[MAX][15];

    printf("Кількість студентів: ");
    scanf("%d", &n);
    if (n > MAX) {
printf("Максимальна кількість студентів = 20."); 
}
else {
for (i = 0; i < n; i++) {
printf("\nСтудент %d\n", i + 1);
printf("Ваше прізвище: ");
scanf("%24s", surname[i]);
printf("Ваші Ініціали: ");
scanf("%9s", name[i]);
printf("Ваш Email: ");
scanf("%29s", email[i]);
printf("Колір: ");
scanf("%14s", color[i]);
}
printf("%-15s %-20s %-20s %-13s %-50s\n", "Номер", "Прізвище", "Ініціали", "Email", "Колір");
for (i = 0; i < n; i++) {
printf("%-10d %-15s %-10s %-19s %-50s\n", i + 1, surname[i], name[i], email[i], color[i]);
}
}   
    return 0;
}