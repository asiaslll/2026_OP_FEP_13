#include <stdio.h>

int main(void){
    int journal_number = 14;
    int i = 0;
    int sum = 0;
    
    while (i < 100){
        i++;
        
        if (i == journal_number || i == 33)
            continue;
        
        sum += i;
    }
    
    printf("Сума: %d\n", sum);
    
    return 0;
}