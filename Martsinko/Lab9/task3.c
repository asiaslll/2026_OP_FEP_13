#include <stdio.h> 
#include <string.h> 
#include <regex.h> 

#define MAX_LEN 256 

int main(void) { 
    char email[MAX_LEN]; 
    regex_t regex; 
    int reti; 
    
    const char *pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-]+(\\.[a-zA-Z0-9-]+)?$"; 
    
    printf("Введіть email: "); 
    
    if (fgets(email, sizeof(email), stdin) == NULL) { 
        return 0; 
    } 
    
    email[strcspn(email, "\r\n")] = '\0'; 
    
    if (regcomp(&regex, pattern, REG_EXTENDED | REG_NOSUB) != 0) { 
        fprintf(stderr, "Помилка компіляції regex\n"); 
        return 1; 
    } 
    
    reti = regexec(&regex, email, 0, NULL, 0); 
    regfree(&regex); 
    
    if (reti == 0) { 
        printf("Правильний\n"); 
    } else { 
        printf("Неправильний\n"); 
    } 
    
    return 0; 
}
