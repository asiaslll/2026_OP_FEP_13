#include <stdio.h>
#include <windows.h>

int* element(int a[], int n) {
    if (n < 0 || n > 9) {
        return NULL;
    }
    return &a[n];
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a[10] = {12, 25, 34, 45, 56, 67, 78, 89, 90, 11};
    int n;
do {
    printf("Введіть індекс від 0 до 9: ");
    scanf("%d", &n);
}
while (n < 0 || n > 9);

    int *p = element(a, n);
    if (p != NULL) {
        printf("Адреса елемента = %p\n", (void *)p);
        printf("Значення: %d\n", *p);
    } else {
        printf("Елемент не знайдено\n");
    }

    return 0;
}