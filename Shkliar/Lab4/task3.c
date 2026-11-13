#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {

// кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

double a, b, c, D, x_1, x_2;

printf("Введіть a: ");
scanf("%lf", &a);
printf("Введіть b: ");
scanf("%lf", &b);
printf("Введіть c: ");
scanf("%lf", &c);
if (a == 0) {
    printf("Це не квадратне рівняння.");
return 0;
    }

D = b * b - 4 * a * c;

printf("\nДискримінант D = %.2lf\n", D);
if (D > 0) {
    x_1 = (-b + sqrt(D)) / (2 * a);
    x_2 = (-b - sqrt(D)) / (2 * a);

printf("Рівняння має два корені:\n");
printf("x1 = %.2lf\n", x_1);
printf("x2 = %.2lf\n", x_2);
    }
else if (D == 0) {
        x_1 = -b / (2 * a);
printf("Рівняння має один корінь:\n");
printf("x = %.2lf\n", x_1);
    }
    else {
printf("Дійсних коренів немає.\n");
    }

    return 0;
}