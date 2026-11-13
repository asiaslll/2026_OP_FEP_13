#include <stdio.h>
#include <windows.h>

double f(double x, int N, int A) {
    return N * x + A;
}

double solveBisection(double a, double b, double eps, int N, int A) {
    double c;
    while ((b - a) >= eps) {
        c = (a + b) / 2.0;
        if (f(c, N, A) == 0.0) {
            break;
        } else if (f(c, N, A) * f(a, N, A) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2.0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N;
    int A = 18;
    double a = -100.0;
    double b = 100.0;
    double eps = 0.001;

    printf("введіть номер в журналі: ");
    scanf("%d", &N);

    if (f(a, N, A) * f(b, N, A) >= 0) {
        printf("на проміжку немає розв'язку\n");
    } else {
        double root = solveBisection(a, b, eps, N, A);
        printf("розв'язок рівняння x = %lf\n", root);
    }
    return 0;
}