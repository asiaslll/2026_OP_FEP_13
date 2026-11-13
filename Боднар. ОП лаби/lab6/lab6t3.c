#include <stdio.h>

int main() {
    int a = 1;
    int sum = 0;

    while (a <= 100) {
        if (a != 3 && a != 33) {
        sum = sum + a;
        }
        a++;
    }
    printf("%d\n", sum);
    return 0;

    }






