#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
   char str[200];
    int vowels = 0, consonants = 0;

    printf("Введіть речення (англійською): ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            vowels++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
    }

    printf("\nГолосні: %d\n", vowels);
    printf("Приголосні: %d\n", consonants);

    return 0;
}