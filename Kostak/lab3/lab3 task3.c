#include <stdio.h>

int main() {
    char surname[50];
    char mail[50];
    char color[30];

    printf("Введіть Прізвище та Ініціали: ");
    scanf(" %49[^\n]", surname);
    printf("Введіть Ел. пошту: ");
    scanf("%49s", mail);
    printf("Введіть Улюблений колір: ");
    scanf(" %29[^\n]", color);

    printf("\n");
    printf("| %-3s | %-22s | %-26s | %-15s |\n",
           "№", "Прізвище, Ініціали", "Ел. пошта", "Улюблений колір");
    printf("===============================================================\n");
    printf("| %-3d | %-22s | %-26s | %-15s |\n",
           1, surname, mail, color);

    return 0;
}
