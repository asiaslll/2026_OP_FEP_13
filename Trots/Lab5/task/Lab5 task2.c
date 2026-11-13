#include <stdio.h>

int main(void) {
    int a, b;

    printf("Введіть перше число: ");
    scanf("%d", &a);

    printf("Введіть друге число: ");
    scanf("%d", &b);


    a > b ? printf("\n%d > %d  (Перше число більше)\n", a, b)
          : (a < b ? printf("\n%d < %d  (Друге число більше)\n", a, b)
                   : printf("\n%d = %d  (Числа рівні)\n", a, b));

    return 0;
}