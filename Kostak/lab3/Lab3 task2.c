#include <stdio.h>

int main(void)
{
    int n = 123;
    double d = 123.456;
    char c = 'k';
    char s[] = "Hello world!";
    int i;

    printf("Десяткове:        %d\n", n);

    printf("Двiйкове:         ");
    for (i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");

    printf("Вiсiмкове:        %o\n", n);
    printf("Шiстнадцяткове:   %x\n", n);

    printf("З плаваючою комою: %f\n", d);
    printf("Експоненцiйна:     %e\n", d);
    printf("Гнучка (g):        %g\n", d);

    printf("Символ:     %c\n", c);
    printf("Стрiчка:    %s\n", s);
    printf("Вказiвник:  %p\n", (void *)s);

    return 0;
}
