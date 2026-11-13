#include <stdio.h>
#include <windows.h>

int sum(int n) {
    if (n == 100) {
        return 100;
    }

    return n + sum(n + 1);
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     int n;
    int s;

    printf("Введіть свій номер в журналі: ");
    scanf("%d", &n);

    s = sum(n);

    printf("Sum = %d", s);

    return 0;
}