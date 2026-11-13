/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 #include <wctype.h>
 #include <locale.h> 
 #include <wchar.h>
int main() {
    if (setlocale(LC_ALL, "") == NULL) { setlocale(LC_ALL, "C.UTF-8"); } 
    wprintf(L"Введіть речення: ");
    wchar_t sentence[256];
    
    const wchar_t vowels[] = L"аеєиіїоуюяaeiouy";
    const wchar_t consonants[] = L"бвгґджзклмнпрстфхцчшщbcdfhjklmnpqrstvwxyz";

    int vowels_count = 0;
    int consonants_count = 0;

    // Змінили лише цей рядок для коректної роботи в OnlineGDB:
    fgetws(sentence, 256, stdin);

    for (int i = 0; sentence[i] != L'\0' && sentence[i] != L'\n'; i++) {
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