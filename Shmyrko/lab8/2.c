#include <stdio.h>
#include <ctype.h>

void i_input(int *ptr) {
    if (scanf("%d", ptr) != 1) {
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        i_input(ptr);
        return;
    }
    return;
}

int a[11], b[13][13];;

void func_a() {
    int i;
    printf("Введіть число i: ");
    i_input(&i);
    
    if (i > 10 || i < 0)
        printf("NULL");
    else 
        printf("%p", &a[i]);
}

void func_b() {
    int i, j;
    printf("Введіть число i: ");
    i_input(&i);
    printf("Введіть число j: ");
    i_input(&j);
    
    if (i > 12 || i < 0 || j > 12 || j < 0)
        printf("NULL");
    else 
        printf("%p", &b[i][j]);
}

int main() {
    char tmp;
    printf("Яку функцію треба використати : ");
    scanf("%c", &tmp);
    
    if (tmp == 'a')
        func_a();
    if (tmp == 'b')
        func_b();
    if (tmp != 'a' && tmp != 'b') 
        printf("Такої функції не існує в програмі");
}