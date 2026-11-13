#include <stdio.h>

int main() {
    char text[100];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a sentence: ");
    fgets(text, 100, stdin);

    for (int a = 0; text[a] != '\0'; a++) {
        char c = text[a];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
        else if ((c >= 'a' && c <= 'z') ||
                 (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}