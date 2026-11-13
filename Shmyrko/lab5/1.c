#include <stdio.h>
#include <math.h>
int a,b;
void input(int *ptr){
     if(scanf("%d",ptr)!=1){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        input(ptr);
        return;
    }

    return;
}
int main() {
    printf("Введіть перше число : ");
    input(&a);
    printf("Введіть друге число число : ");
    input(&b);
    a>b ? printf("перше число більше") : (a==b ? printf("числа однакові") : printf("друге число більше"));
    return 0;
}