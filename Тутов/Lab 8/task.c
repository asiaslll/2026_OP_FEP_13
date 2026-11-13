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
        printf("Помилка: введено некоректне число.\n");
    }

    return 0;
}


2)
  #include <stdio.h>

// Рекурсивна функція для обчислення суми чисел від current до target
long long recursive_sum(int current, int target) {
    // Умова виходу з рекурсії (базовий випадок)
    if (current > target) {
        return 0;
    }
    // Рекурсивний виклик: поточне число + сума решти чисел
    return current + recursive_sum(current + 1, target);
}

int main() {
    int N = 12; // Ваш порядковий номер у журналі
    int target = 100;

    long long total_sum = recursive_sum(N, target);

    printf("Рекурсивна сума чисел від N (%d) до %d дорівнює: %lld\n", N, target, total_sum);

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
    // Перевірка умови існування кореня на інтервалі [a, b] (теорема Больцано-Коші)
    if (f(a, N, A) * f(b, N, A) >= 0) {
        printf("Помилка: на заданому інтервалі немає кореня або функція не змінює знак.\n");
        return 0.0;
    }

    double c = a;
    while ((b - a) / 2.0 > eps) {
        c = (a + b) / 2.0;

        // Якщо точне значення знайдено або досягнуто необхідну точність
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
    double N = 12.0;    
    double A = 17.0;    
    double a = -100.0;  
    double b = 100.0;  
    double eps = 1e-6;  

    printf("Розв'язання рівняння %.0f*x + %.0f = 0 методом половинного ділення\n", N, A);
    printf("Інтервал пошуку: [%.0f, %.0f]\n", a, b);

    double root = bisection_method(N, A, a, b, eps);

    printf("Знайдений чисельний корінь x = %.6f\n", root);
    
    // Аналітична перевірка за формулою x = -A / N
    printf("Аналітична перевірка (-A / N) = %.6f\n", -A / N);

    return 0;
}
