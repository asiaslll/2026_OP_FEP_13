/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b;
    printf("Введіть два числа: ");
    scanf("%d %d", &a, &b);

    printf("%d %s %d\n", a, (a > b) ? ">" : (a < b) ? "<" : "=", b);

    return 0;
}