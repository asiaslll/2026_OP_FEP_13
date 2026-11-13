#include <stdio.h>
#include <windows.h>

bool primenum(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
     SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    printf("введіть число: ");
    if (scanf("%d", &num) != 1) {
        printf("введіть число.\n");
        return 1;
    }
    if (primenum(num)) {
        printf("число є простим\n");
    } else {
        printf("число не є простим\n");
    }
    return 0;
}