#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    int max = a;

    printf("Проведіть першу сторону трикутника: ");
    scanf("%d", &a);
    printf("Проведіть другу сторону трикутника: ");
    scanf("%d", &b);
    printf("Проведіть третю сторону трикутника: ");
    scanf("%d", &c);
   if (a + b > c && a + c > b && b + c > a) {
    printf("Трикутник існує\n");
    
    if (a == b && b == c) {
        printf("Трикутник рівносторонній\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Трикутник рівнобедрений\n");
    }
    else {
        printf("Трикутник різносторонній\n");
    }
}
     else {
    printf("Трикутник не існує\n");
    }

     if (b > max) {
    max = b;
    } 
    
    if (c > max) {
    max = c;
    }
    
    int x = max * max;
    int y = a*a + b*b + c*c - x;

    if (x == y) {
    printf("Трикутник прямокутний\n");
    }
    else if (x < y) {
    printf("Трикутник гострокутний\n");
    }
    else {
    printf("Трикутник тупокутний\n");
}
    
    return 0;
}