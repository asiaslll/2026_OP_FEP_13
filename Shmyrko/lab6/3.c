#include <stdio.h>
void input(int *ptr){
     if(scanf("%d",ptr)!=1 ||*ptr<7||*ptr>12){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        input(ptr);
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
int n;
float b,min=10e10,max=-(10e10),sum=0,nn=0;
int main() {
   printf("Введіть число N\n");
   input(&n);
   for(int i=1;i<=n;i++){
      f_input(&b);
      if(min>b)min=b;if(max<b)max=b;
      sum+=b;
      nn+=1.0;
   }
   printf("Сумма %.2f\nСереднє %.2f\nМінімальне %.2f\nМаксимальне %.2f\n",sum,sum/nn,min,max);
   return 0;
}
