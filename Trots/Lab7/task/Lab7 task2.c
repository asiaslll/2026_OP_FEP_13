#include <stdio.h>

int isPrime(int n);


int main()
{
    
    int n;
    
    printf("\nВведіть число: ");
    
    if (scanf("%d", &n) != 1){
        printf("Ви ввели щось не вірно!\n");
        return 1;
    }
    
    if (n < 2){
        printf("Число %d не є простим (прості числа починаються з 2)\n", n);
        return 0;
    }
    
    if (isPrime(n))
        printf("Число %d є простим\n", n);
    else
        printf("Число %d не є простим\n", n);
        
    return 0;
}

int isPrime (int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}