#include <stdio.h>
#include <windows.h>

int rec(int num){
    if (num >= 100){
        return 100;
    }
    return num + rec(num + 1);

}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    printf("Введіть ваш порядковий номер:");
    scanf("%d", &num);
    printf("%d", rec(num));
}