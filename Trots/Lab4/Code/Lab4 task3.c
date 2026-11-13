#include <stdio.h>

int main(void)
{
    int x;
    int *p;  

    printf("Введіть число: ");
    scanf("%d", &x);

    p = &x;

    printf("\nЗначення змінної x      : %d\n", x);
    printf("Адреса змінної x        : %p\n", (void *)&x);
    printf("Значення вказівника p   : %p\n", (void *)p);
    printf("Значення через *p       : %d\n", *p);
    printf("Адреса самого вказівника: %p\n", (void *)&p);

    *p = *p + 1;
    printf("\nПісля *p = *p + 1 значення x = %d\n", x);

    return 0;
}
