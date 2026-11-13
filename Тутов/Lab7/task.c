1)
  #include <stdio.h>

// Функція для перевірки, чи є число простим
int is_prime(int n) {
    if (n <= 1) return 0; // Числа <= 1 не є простими
    if (n <= 3) return 1; // 2 та 3 — прості числа
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1; // Число просте
}

int main() {
    int num;
    
    printf("Введіть ціле число для перевірки: ");
    if (scanf("%d", &num) == 1) {
        if (is_prime(num)) {
            printf("Результат: Число %d є простим.\n", num);
        } else {
            printf("Результат: Число %d НЕ є простим.\n", num);
        }
    } else {
        printf("Помилка: введено не коректне число.\n");
    }

    return 0;
}


2)
#include <stdio.h>

// Рекурсивна функція для обчислення суми чисел від current до target
int recursive_sum(int current, int target) {
    // Базовий випадок: якщо поточне число перевищує кінцеве, повертаємо 0
    if (current > target) {
        return 0;
    }
    // Рекурсивний випадок: додаємо поточне число до суми решти чисел
    return current + recursive_sum(current + 1, target);
}

int main() {
    int N = 12; // Ваш порядковий номер у журналі (змініть за необхідності)
    int target = 100;

    // Перевірка на коректність діапазону
    if (N > target) {
        printf("Помилка: порядковий номер (%d) не може бути більшим за 100.\n", N);
        return 1;
    }

    // Виклик рекурсивної функції
    int total_sum = recursive_sum(N, target);

    // Виведення результату
    printf("Порядковий номер у журналі (N): %d\n", N);
    printf("Кінцеве число: %d\n", target);
    printf("Сума чисел від %d до %d дорівнює: %d\n", N, target, total_sum);

    return 0;
}




3)

#include <stdio.h>
#include <math.h>

// Функція лінійного рівняння: f(x) = N * x + A
double f(double x, double N, double A) {
    return N * x + A;
}

// Метод половинного ділення для знаходження кореня f(x) = 0
double bisection_method(double N, double A, double a, double b, double eps) {
    // Перевірка умови існування кореня на інтервалі [a, b]
    if (f(a, N, A) * f(b, N, A) >= 0) {
        printf("Помилка: на заданому інтервалі немає кореня або функція не змінює знак.\n");
        return 0.0;
    }

    double c = a;
    while ((b - a) / 2.0 > eps) {
        c = (a + b) / 2.0;

        
        if (f(c, N, A) == 0.0) {
            break;
        } 
        // Вибираємо півінтервал, на кінцях якого функція змінює знак
        else if (f(a, N, A) * f(c, N, A) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2.0;
}

int main() {
    // Вхідні дані
    double N = 12;      
    double A = 17;      
    
    double a = -100.0;  
    double b = 100.0;   
    double eps = 1e-6;  // Точність обчислень (10^-6)

    printf("Розв'язання рівняння %.0f*x + %.0f = 0 методом половинного ділення\n", N, A);
    printf("Інтервал: [%.0f, %.0f]\n", a, b);

    double root = bisection_method(N, A, a, b, eps);

    printf("Знайдений корінь x = %.6f\n", root);
    
    // Аналітична перевірка: x = -A / N
    printf("Перевірка (аналітичний розв'язок -A/N) = %.6f\n", -A / N);

    return 0;
}
