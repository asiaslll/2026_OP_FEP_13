/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() { 
    int n;
    printf("Введіть число від 7 до 12: "); 
    scanf("%d", &n);
    
    if (n > 12 || n < 7) {
        printf("Введіть коректне число\n");
        return 1;
    }

    double array[n];
    double min;
    double max;
    double sum = 0;

    for (int i = 0; i < n; i++) {
         printf("Введіть число: ");
         scanf("%lf", &array[i]);

         if (i == 0) {
             min = array[i];
             max = array[i];
         } else {
              if (array[i] < min) {
                  min = array[i];
              }
              if (array[i] > max) {
                  max = array[i];
              }
        }
        sum += array[i];
}

double avg = sum / n;

printf("Min: %.2lf, Max: %.2lf, Sum: %.2lf, Avg: %.2lf\n", min, max, sum, avg);

return 0;
}