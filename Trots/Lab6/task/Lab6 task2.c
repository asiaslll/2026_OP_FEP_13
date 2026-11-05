#include <stdio.h>
#include <ctype.h>

int main(void){
    char sentence[256];
    int vowels = 0, consonants = 0;
    int i = 0;
    
    printf("Введіть слово: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    while (sentence[i] != '\0'){
        char ch = tolower(sentence[i]);
        i++;
        
        if (ch == '\n')
        break;
        
        if (!isalpha(ch))
        continue;
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
            vowels++;
        else
            consonants++;
    }
    
    printf("Голосні: %d\n", vowels);
    printf("Приголосні: %d\n", consonants);
    
    return 0;

}