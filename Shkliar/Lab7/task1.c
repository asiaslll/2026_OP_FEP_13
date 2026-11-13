#include <stdio.h>
#include <windows.h>

int a(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
        SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;

    printf("Введіть число: ");
    scanf("%d", &n);

    if (a(n) == 1) {
        printf("Число просте");
    } else {
        printf("Число не просте");
    }

    return 0;
}