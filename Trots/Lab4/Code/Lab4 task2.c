#include <stdio.h>

void print_bin(unsigned char n)
{
    for (int i = 7; i >= 0; i--)
        putchar(((n >> i) & 1) ? '1' : '0');
}

void show_bit(const char *op, unsigned char a, unsigned char b, unsigned char r)
{
    print_bin(a);
    printf(" %s ", op);
    print_bin(b);
    printf(" = ");
    print_bin(r);
    printf("  (%d %s %d = %d)\n", a, op, b, r);
}

int main(void)
{
    int a = 17, b = 5;

    printf("=== Арифметичні оператори (a = %d, b = %d) ===\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (цілочисельне ділення)\n", a / b);
    printf("a / b = %.2f (дійсне ділення)\n", (float)a / b);
    printf("a %% b = %d (остача)\n", a % b);
    printf("-a    = %d (унарний мінус)\n", -a);

    int x = 10;
    printf("\nІнкремент і декремент (x = %d):\n", x);
    printf("x++ = %d, ", x++);
    printf("після цього x = %d\n", x);
    printf("++x = %d\n", ++x);
    printf("x-- = %d, ", x--);
    printf("після цього x = %d\n", x);
    printf("--x = %d\n", --x);

    printf("\n=== Оператори порівняння (a = %d, b = %d) ===\n", a, b);
    printf("a >  b : %d\n", a > b);
    printf("a >= b : %d\n", a >= b);
    printf("a <  b : %d\n", a < b);
    printf("a <= b : %d\n", a <= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);

    int p = 1, q = 0;
    printf("\n=== Логічні оператори (p = %d, q = %d) ===\n", p, q);
    printf("p && q = %d (І)\n", p && q);
    printf("p || q = %d (АБО)\n", p || q);
    printf("!p     = %d (НЕ)\n", !p);
    printf("!q     = %d (НЕ)\n", !q);

    unsigned char m = 12;  
    unsigned char n = 10;   
    printf("\n=== Побітові оператори ===\n");
    printf("m = ");
    print_bin(m);
    printf(" (%d)\nn = ", m);
    print_bin(n);
    printf(" (%d)\n\n", n);

    show_bit("&", m, n, m & n);  
    show_bit("|", m, n, m | n);  
    show_bit("^", m, n, m ^ n);   

    unsigned char inv = (unsigned char)~m;   
    printf("~");
    print_bin(m);
    printf(" = ");
    print_bin(inv);
    printf("  (~%d = %d)\n", m, inv);

    unsigned char r = (unsigned char)(m >> 2);  
    print_bin(m);
    printf(" >> 2 = ");
    print_bin(r);
    printf("  (%d >> 2 = %d)\n", m, r);

    unsigned char l = (unsigned char)(m << 2);  
    print_bin(m);
    printf(" << 2 = ");
    print_bin(l);
    printf("  (%d << 2 = %d)\n", m, l);

    return 0;
}