#include <stdio.h>
#include <wctype.h>
#include <locale.h>
#include <wchar.h>

int main() {
    if (setlocale(LC_ALL, "") == NULL) {
        setlocale(LC_ALL, "C.UTF-8");
    }
    wprintf(L"Введіть речення: ");
    wchar_t sentence[256];
    const wchar_t vowels[] = L"аеєиіїоуюяaeiouy"; 
    const wchar_t consonants[] = L"бвгґджзйклмнпрстфхцчшщbcdfghjklmnpqrstvwxz";
    int vowels_count = 0;
    int consonants_count = 0;
    wscanf(L"%255l[^\n]", sentence);
    for (int i = 0; sentence[i] != L'\0'; i++) {
        wchar_t ch = towlower(sentence[i]); 
        if (wcschr(vowels, ch)) { 
            vowels_count++;
        } else if (wcschr(consonants, ch)) {
            consonants_count++;
        }
    }
    wprintf(L"Голосні: %d\n", vowels_count);
    wprintf(L"Приголосні: %d\n", consonants_count);
    return 0;
}

