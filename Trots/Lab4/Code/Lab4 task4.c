#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, d, x1, x2;

    printf("Розв'язання рівняння a*x^2 + b*x + c = 0\n");
    printf("Введіть коефіцієнти a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Рівняння має безліч розв'язків.\n");
            else
                printf("Рівняння не має розв'язків.\n");
        }
        else
        {
            x1 = -c / b;
            printf("Це лінійне рівняння, x = %.4f\n", x1);
        }
        return 0;
    }

    d = b * b - 4 * a * c;
    printf("Дискримінант D = %.4f\n", d);

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Два дійсні корені:\n");
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        printf("Один корінь (кратності 2): x = %.4f\n", x1);
    }
    else
    {
        double re = -b / (2 * a);
        double im = sqrt(-d) / (2 * a);
        printf("Дійсних коренів немає. Комплексні корені:\n");
        printf("x1 = %.4f + %.4fi\n", re, fabs(im));
        printf("x2 = %.4f - %.4fi\n", re, fabs(im));
    }

    return 0;
}