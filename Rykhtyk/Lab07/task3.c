#include <stdio.h>
#include <math.h>
#include <windows.h>

double f(double x, double N, double A) {
    return N * x + A;
}

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double N, A;

    printf("Введіть порядковий номер N:");
    scanf("%lf", &N);
    printf("Введіть ваш вік A:");
    scanf("%lf", &A);

    double a = -100.0;
    double k = 100.0;
    double po = 0.00001;

    if (f(a, N, A) * f(k, N, A) > 0) {
        printf("На відрізку [%.0f, %.0f] кореня немає.\n", a, k);
        return 1;
    }

    double mid;

    while ((k - a) / 2.0 > po) {
        mid = (a + k) / 2.0;

        if (f(mid, N, A) == 0.0) {
            break;
        }

        if (f(a, N, A) * f(mid, N, A) < 0) {
            k = mid;
        } else {
            a = mid;
        }
    }

    double xvih = (a + k) / 2.0;

    printf("\nРезультат:\n");
    printf("Знайдений корінь x: %.lf\n", xvih);

    return 0;
}