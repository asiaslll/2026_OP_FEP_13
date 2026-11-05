#include <stdio.h>

int main(void){
    
    int n;
    float x, sum = 0, min = 0, max = 0;
    
    do{
        printf("\nВведіть число від 7 до 12: ");
        scanf("%d", &n);
    } while (n < 7 || n > 12);
    
    for (int i = 1; i <= n; i++){
        
        printf("\nВведіть число %d: ", i);
        scanf("%f", &x);
        
        sum += x;
        
        if (i == 1){
            min = x;
            max = x;
            continue;
        }
        
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }
    
    printf("Сума = %.2f\n", sum);
    printf("Середнє арифметичне = %.2f\n", sum / n);
    printf("Мінімальне = %.2f\n", min);
    printf("Максимальне = %.2f\n", max);
    
    return 0;
}