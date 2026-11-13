#include <stdio.h>
#include <windows.h>

bool che(int num){
    if (num < 2){
        return false;
    }
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;

    printf("Введіть число:");
    if (scanf("%d", &num) != 1){
        printf("Невірне введення.\n");
        return 1;
    }

    if (che(num)){
        printf("%d Просте число\n", num);
    }
    else{
        printf("%d Не просте число\n", num);
    }
    return 0;

}

