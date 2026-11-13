#include <stdio.h>

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int n;
    printf("Введіть число: ");
    scanf("%d", &n);
    printf("Число Фібоначчі: %d", fib(n));
    return 0;
}