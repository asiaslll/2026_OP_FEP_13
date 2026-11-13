#include <stdio.h>
#include <windows.h>

// Двійковий формат
void printBinary(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {

    // кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unsigned char a = 12;
    unsigned char b = 5;
    printf("\n---Арифметичні оператори:---\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("\n--Логічні оператори:---\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("(a > b) && (b > 0) = %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) = %d\n", (a < b) || (b > 0));
    printf("!(a < b) = %d\n", !(a < b));
    printf("\na = %d = ", a);
    printBinary(a);
    printf("\nb = %d = ", b);
    printBinary(b);
    printf("\n\na & b = %d = ", a & b);
    printBinary(a & b);
    printf("\na | b = %d = ", a | b);
    printBinary(a | b);
    printf("\na ^ b = %d = ", a ^ b);
    printBinary(a ^ b);
    printf("\n~a = %d = ", (unsigned char)~a);
    printBinary(~a);
    printf("\na << 1 = %d = ", a << 1);
    printBinary(a << 1);
    printf("\na >> 1 = %d = ", a >> 1);
    printBinary(a >> 1);


    return 0;
}