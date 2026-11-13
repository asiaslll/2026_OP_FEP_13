#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

#define MAX_WORDS 50
#define MAX_WORD_LEN 100
#define MAX_LINE_LEN 500

void reverse_word(wchar_t *str) {
    int len = wcslen(str);
    wchar_t temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    } 
}



int main(void) {
    setlocale(LC_ALL, "");
    wchar_t line[MAX_LINE_LEN];
    wchar_t words[MAX_WORDS][MAX_WORD_LEN];
    int word_count = 0;

    wprintf(L"Введіть прислів'я: ");
    if (fgetws(line, MAX_LINE_LEN, stdin) == NULL) {
        return 1;
    }
    
    wchar_t *temp;
    wchar_t *token = wcstok(line, L" ", &temp);
    while (token != NULL && word_count < MAX_WORDS) {
        wcscpy(words[word_count], token);
        words[word_count][MAX_WORD_LEN - 1] = '\0';
        word_count++;
        token = wcstok(NULL, L" ", &temp);
    }
    for (int i = 0; i < word_count; i++) {
        reverse_word(words[i]);
        wprintf(L"%ls\n", words[i]);
    }

    return 0;
}