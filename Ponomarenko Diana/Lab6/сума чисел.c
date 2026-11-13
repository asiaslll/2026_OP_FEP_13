#include <stdio.h> 
#include <ctype.h>

int main() {
    printf("Enter sentence: "); char text[256];
    int v_count = 0;
    int c_count = 0;

    if (fgets(text, sizeof(text), stdin) != NULL) {
        int i = 0;

        while (text[i] != '\0' && text[i] != '\n') {
            char current_char = tolower(text[i]);

            if (current_char == 'a' || current_char == 'e' || current_char == 'i' || current_char == 'o' || current_char == 'u') {
                v_count++;
            } else if (current_char >= 'a' && current_char <= 'z') {
                c_count++;
            }
            i++;
        }
    }

    printf("Vowels count: %d\n", v_count);
    printf("Consonants count: %d\n", c_count);

    return 0;
}