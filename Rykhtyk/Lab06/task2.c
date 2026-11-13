#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    int i = 1;
    int summ = 0;
    int number = 12; 

    while (i <= 100) {
        
        if (i == 33 || i == number) {
            i++;
            continue;
        } 
        summ += i;
        i++;
    }

    printf("Сума чисел: %d\n", summ); 
    return 0;
}