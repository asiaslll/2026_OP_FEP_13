#include <stdio.h>

double f(double x);
double bisection(double a, double b, double eps);

double N;  
double A;   

int main()
{
    double a = -100, b = 100;
    double eps = 0.001;
    double x;

    printf("Введіть ваш порядковий номер: ");
    if (scanf("%lf", &N) != 1) {
        printf("Ви ввели не число!\n");
        return 1;
    }

    printf("Введіть ваш вік: ");
    if (scanf("%lf", &A) != 1) {
        printf("Ви ввели не число!\n");
        return 1;
    }

    if (N <= 0) {
        printf("Номер має бути більше 0!\n");
        return 1;
    }

    x = bisection(a, b, eps);
    printf("Розв'язок рівняння %.0f*x + %.0f = 0: x = %.4f\n", N, A, x);

    return 0;
}

double f(double x)
{
    return N * x + A;
}

double bisection(double a, double b, double eps)
{
    double c;

    while (b - a >= eps) {
        c = (a + b) / 2;

        if (f(a) * f(c) <= 0)
            b = c;  
        else
            a = c;   
    }
    return (a + b) / 2;
}