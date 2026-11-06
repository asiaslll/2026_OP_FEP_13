/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

 // Функція для перевірки, чи є число простим (повертає 1 - якщо просте, і 0 - якщо ні) 
 int is_prime(int n) {
     if (n <= 1) {
         return 0; // Числа менші або рівні 1 не є простими
     }
     for (int i = 2; i * i <= n; i++) {
         if (n % i == 0) {
            return 0; // Знайдено дільник, отже число складне
         }
     } 
     return 1; // Число просте 
}

int main(void) {
    int num;
    printf("Ввести ціле число для перевірки: ");
    scanf("%d", &num);
    
    if (is_prime(num)) {
    printf("Результат: число %d є простим.\n", num);
    } else {
        printf("Результат: число %d не є простим.\n", num);
}

return 0;
}