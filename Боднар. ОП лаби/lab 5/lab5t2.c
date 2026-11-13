#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Введіть перше число: ");
    scanf("%d", &a);
    printf("Введіть друге число: ");
    scanf("%d", &b);
    int max = (a > b) ? a : b;
    printf("Максимальне число: %d\n", max);

    return 0;
}