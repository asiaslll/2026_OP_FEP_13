#include <stdio.h>
#include <windows.h>
int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char str[300];
    int vowels = 0, consonants = 0;

    printf("Введіть повідомлення (english): ");
    fgets(str, sizeof(str), stdin);
for (int a = 0; str[a] != '\0'; a++) {
    unsigned char ch = str[a];
    
    if (ch == '\n' || ch == ' ') {
        continue;
    }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    else {
        consonants++;
    }
    }

    printf("Голосні: %d\n", vowels);
    printf("Приголосні: %d\n", consonants);
    return 0;
}