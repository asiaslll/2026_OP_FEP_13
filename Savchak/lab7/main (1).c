/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 #include <math.h>
 
// Задаємо індивідуальні параметри 
double N = 13.0; // Мій порядковий номер у журналі 
double A = 17.0; // Мій вік 
// Функція рівняння f(x) = N * x + A
double f(double x) {
    return N * x + A;
}
int main(void) { 
    double a = -100.0; 
    double b = 100.0;  
    double eps = 0.001;
    double c;

// Перевірка наявності кореня на інтервалі
if (f(a) * f(b) >= 0) {
    printf("На заданому інтервалі корінь відсутній або їх декілька.\n");
    return 1;
}

// Алгоритм методу половинного ділення
while ((b - a) >= eps) {
    c = (a + b) / 2.0;

    if (f(c) == 0.0) {
        break;
    } else if (f(a) * f(c) < 0) {
        b = c;
    } else {
        a = c;
    }
}

printf("Параметри: N = %.0f, A = %.0f\n", N, A);
printf("Розв'язок рівняння (корінь x) = %.4f\n", (a + b) / 2.0);

return 0;
}