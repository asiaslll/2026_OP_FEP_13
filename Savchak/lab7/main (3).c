/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// Рекурсивна функція для додавання чисел від поточного значення до 100 
int recursive_sum(int current, int target) {
    // Базовий випадок: якщо поточне число більше за 100, повертає 0 
    if (current > target) { 
        return 0;
    }
    // Рекурсивний випадок: поточне число + сума решти чисел
    return current + recursive_sum(current + 1, target);
}

int main(void) {
    int N = 13; 
    int target = 100;
    
    int total_sum = recursive_sum(N, target);

    printf("Мій порядковий номер у журналі: %d\n", N);
    printf("Сума чисел від %d до %d (рекурсивно) дорівнює: %d\n", N, target, total_sum);

    return 0;
}