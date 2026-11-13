#include <stdio.h>

int main(void){
    double a,b,c;
    
    printf("Введіть три сторони (3 4 5): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Трикутник не існує!\n");
        return 0;
    }
    
    if (a == b && b == c)
        printf("Рівносторонній\n");
    else if (a == b || b == c || a == c)
        printf("Рівнобедренний\n");
    else
        printf("Різносторонній\n");
        
    double max = a, x = b, y = c;
    if (b > max) { max = b; x = a; y = c; }
    if (c > max) { max = c; x = a; y = b; }
    
    double left  = max * max;
    double right = x * x + y * y;
    
    if (left == right)
        printf("Прямокутний\n");
    else if (left < right)
        printf("Гострокутний\n");
    else
        printf("Тупокутний\n");
    
    return 0;
}