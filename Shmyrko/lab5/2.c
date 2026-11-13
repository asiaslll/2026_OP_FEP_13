#include <stdio.h>
void i_input(int *ptr){
     if(scanf("%d",ptr)!=1){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        i_input(ptr);
        return;
    }

    return;
}void f_input(float *ptr){
     if(scanf("%f",ptr)!=1){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        f_input(ptr);
        return;
    }

    return;
}
float a,b,c;
int main() {
    printf("Введіть три сторони трикотника(a,b,c)\n");
    printf("Введіть сторону а : ");f_input(&a);
    printf("Введіть сторону b : ");f_input(&b);
    printf("Введіть сторону c : ");f_input(&c);
    
    if((a+b>c)&&(a+c>b)&&(c+b>a)){
        if(a==b&&b==c){
            printf("трикутник є рівностороннім та ");
        }
        else if(a==b||c==b){
            printf("трикутник є рівнобедреним та ");
        }
        else{ 
        printf("Даний трикутник є різностороннім та ");
        }
        float max=a,sum=0;
        if(b>max)max=b;
        if(c>max)max=c;
        sum=a*a+b*b+c*c-max*max;
        
        if(sum==max*max){
            printf("прямокутний");
        }
        else if(sum>max*max){
            printf("гострокутний");
        }
        else{
            printf("тупокутний");
        }
    }
    else {
        printf("Такого трикутника не існує");
    }
    return 0;
}