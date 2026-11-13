#include <stdio.h>
#include <windows.h>

int sumRange(int n) {
    if (n > 100) {
        return 0;
    }
    if (n == 100) {
        return 100;
    }
    return n + sumRange(n + 1);
}

int main() {
   SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int N;
    printf("введіть свій номер в журналі: ");
    scanf("%d", &N);

    int result = sumRange(N);
    printf("Сума від %d до 100 = %d\n", N, result);

    return 0;
}