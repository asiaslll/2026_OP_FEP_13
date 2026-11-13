#include <stdio.h>
#include <windows.h>

double f(double x, int n, int a) {
    return n * x + a;
}

int main() {
        SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n, a;
    double x1 = -100;
    double x2 = 100;
    double x;

    printf("Введіть свій номер в журанлі: ");
    scanf("%d", &n);

    printf("ВВедіть свій вік: ");
    scanf("%d", &a);

    while (x2 - x1 > 0.001) {
        x = (x1 + x2) / 2;

        if (f(x1, n, a) * f(x, n, a) < 0) {
            x2 = x;
        } else {
            x1 = x;
        }
    }

    x = (x1 + x2) / 2;

    printf("Корень = %.2lf", x);

    return 0;
}