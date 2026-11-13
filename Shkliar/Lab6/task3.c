#include <windows.h>
#include <stdio.h>

int main(void) {

        SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    int n;
    double sum = 0;
    double x, min, max;

    do {
        printf("Введіть число від 7 до 12: ");
        scanf("%d", &n); 
         }
        while (n < 7 || n > 12);
   for (int i = 1; i <= n; i++) {

            printf("Введіть число %d: ", i);
        scanf("%lf", &x);
    
        if (i == 1) {
            min = x;
            max = x;
        }
if (x < min) {
    min = x;
}
if (x > max) {
    max = x;
}
sum += x;
   }
       printf("Сума = %.2f\n", sum);
    printf("Середнє арифметичне = %.2f\n", sum / n);
    printf("Мінімум = %.2f\n", min);
    printf("Максимум = %.2f\n", max);
    return 0;
}
