#include <stdio.h>
#include <windows.h>

int main(void) {
    // кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

int a, b, c, d;

printf("Введіть сторону a: ");
scanf("%d", &a);
printf("Введіть сторону b: ");
scanf("%d", &b);
printf("Введіть сторону c: ");
scanf("%d", &c);

if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
printf("Трикутника не існує");

return 0;

}
if (a == b && b == c) {
    printf("Трикутник рівносторонній\n");
}
if (a == b || b == c || c == a) {
    printf("Трикутник рівнобедрений\n");
}
else if (!(a == b && b == c)) {
    printf("Трикутник різносторонній\n");
}
    if (a > b) {
        d = a;
        a = b;
        b = d;
    }
    if (b > c) {
        d = b;
        b = c;
        c = d;
    }
    if (a > b) {
        d = a;
        a = b;
        b = d;
    }
    if (a * a + b * b == c * c) {
        printf("Трикутник прямокутний\n");
    } else if (a * a + b * b > c * c) {
        printf("Трикутник гострокутний\n");
    } else {
        printf("Трикутник тупокутний\n");
    }
    return 0;
}