#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    int i = 1;
    int sum = 0;
    int my_number = 1; 

    while (i <= 100) {
        
        if (i == 33 || i == my_number) {
            i++;
            continue;
        }
        
        sum += i;
        i++;
    }

    printf("Сума чисел: %d\n", sum);
    return 0;}