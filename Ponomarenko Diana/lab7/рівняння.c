#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <windows.h>
double f(double x, double n, double a) { 
    return n * x + a; 
}
int main(void) { 
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001);
    double N = 2.0; 
    double A = 18.0; 

    double a_left = -100.0;
    double b_right = 100.0;
    double eps = 0.001; 
    double c;

    if (f(a_left, N, A) * f(b_right, N, A) > 0) {
        printf("На заданому інтервалі немає кореня або їх парна кількість!\n");
        return 1;
    }

    while ((b_right - a_left) >= eps) {
        c = (a_left + b_right) / 2.0; 

        if (f(c, N, A) == 0.0) {
            break; 
        }

        if (f(c, N, A) * f(a_left, N, A) < 0) {
            b_right = c;
        } else {
            a_left = c;
        }
    }

    double root = (a_left + b_right) / 2.0;
    printf("Розв'язок рівняння %.0f * x + %.0f = 0 на інтервалі [-100..100]: x = %.4f\n", N, A, root);

    return 0;
}