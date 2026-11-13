#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

void i_input(int *ptr){
     if(scanf("%d",ptr)!=1){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        i_input(ptr);
        return;
    }
    return;
}

void f_input(double *ptr){
     if(scanf("%lf",ptr)!=1){
        while (getchar() != '\n');
        printf("\nПОМИЛКАААААА!!!введіть число ще раз : ");
        f_input(ptr);
        return;
    }
    return;
}

double** allocmatrix(int r,int c){
    double **matr= (double**)malloc(r*sizeof(double *));
    for(int i =0;i< r;i++){
        matr[i]= (double *)malloc(c *sizeof(double));
    }
    return matr;
}
void freematr(double **matr ,int r){
    for(int i=0;i<r;i++) free(matr[i]);
    free(matr);
}
double** transponate(double **matr,int r,int c){
    double **res=allocmatrix(c,r);{
        for(int i=0;i< r;i++){
            for(int j =0;j<c ;j++){
                res[j][i]=matr[i][j];
            }
        }
    }
    return res;
}
double** mult_by_scalar(double **matr,int r,int c,double x){
    double **res=allocmatrix(r,c);
    for(int i=0;i< r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=matr[i][j]*x;
        }
    }
    return res;
}
void input_matrix(double **matr,int r,int c) {
    for (int i=0; i<r;i++) {
        for (int j=0; j<c; j++) {
            f_input(&matr[i][j]);
        }
    }
}
void print_matrix(double **matr, int r, int c) {
    printf("Результат:\n");
    for (int i = 0;i<r;i++) {
        for (int j=0; j<c;j++) {
            printf("%8.2lf ", matr[i][j]);
        }
        printf("\n");
    }
}
double** add_matrixes(double **A,double **B,int r,int c){
    double **res=allocmatrix(r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) res[i][j]=A[i][j]+B[i][j];
    }
    return res;
}
double** minus_matrixes(double **A,double **B,int r,int c){
    double **res=allocmatrix(r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) res[i][j]=A[i][j]-B[i][j];
    }
    return res;
}
double** mult_by_matrix(double **A,int ra,int ca,double **B,int rb,int cb){
    double **res=allocmatrix(ra,cb);
    for(int i=0;i<ra;i++){
        for(int j=0;j<cb;j++){
            res[i][j]=0.0;
            for(int k=0;k<ca;k++){
                res[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    return res;
}
int main() {
    int temp;
    printf("Оберіть дію:\n");
    printf("1. Транспонування матриці\n");
    printf("2. Множення матриці на скаляр\n");
    printf("3. Додавання матриць\n");
    printf("4. Віднімання матриць\n");
    printf("5. Множення матриць\n");
    i_input(&temp);
    
    int row,col,row2,col2;
    double **matrix=NULL;
    double **matrix2=NULL;
    double **result=NULL;
    switch (temp)
    {
    case 1:
        printf("Введіть кількість рядків та стовпчиків матриці (через пробіл):\n");
        i_input(&row);
        i_input(&col);
        printf("Введіть саму матрицю:\n");
        matrix = allocmatrix(row,col);
        input_matrix(matrix,row,col);
        
        result=transponate(matrix,row,col);
        print_matrix(result,col,row);
        
        freematr(matrix, row);
        freematr(result, col);
        break;
    
    case 2:
        printf("Введіть кількість рядків та стовпчиків матриці (через пробіл):\n");
        i_input(&row);
        i_input(&col);
        printf("Введіть саму матрицю:\n");
        matrix = allocmatrix(row,col);
        input_matrix(matrix,row,col);
        
        double scalar;
        printf("Введіть скаляр: ");
        f_input(&scalar);
        
        result=mult_by_scalar(matrix,row,col,scalar);
        print_matrix(result,row,col);
        freematr(matrix, row);
        freematr(result, row);
        break;
    
    case 3:
        printf("Введіть кількість рядків та стовпчиків матриці номер 1 (через пробіл):\n");
        i_input(&row);
        i_input(&col);
        printf("Введіть саму матрицю номер 1:\n");
        matrix=allocmatrix(row,col);
        input_matrix(matrix,row,col);

        printf("Введіть кількість рядків та стовпчиків матриці номер 2 (через пробіл):\n");
        i_input(&row2);
        i_input(&col2);
        if (row!= row2 || col!= col2) {
            printf("Помилка: розміри матриць повинні бути однаковими для додавання!\n");
            freematr(matrix,row);
            return 1;
        }

        printf("Введіть саму матрицю номер 2:\n");
        matrix2=allocmatrix(row2,col2);
        input_matrix(matrix2,row2,col2);

        result =add_matrixes(matrix, matrix2, row, col);
        print_matrix(result, row, col);

        freematr(matrix, row);
        freematr(matrix2, row2);
        freematr(result, row);
        break;
        
    case 4:
        printf("Введіть кількість рядків та стовпчиків матриці номер 1 (через пробіл):\n");
        i_input(&row);
        i_input(&col);
        printf("Введіть саму матрицю номер 1:\n");
        matrix=allocmatrix(row,col);
        input_matrix(matrix,row,col);

        printf("Введіть кількість рядків та стовпчиків матриці номер 2 (через пробіл):\n");
        i_input(&row2);
        i_input(&col2);
        if (row!= row2 || col!= col2) {
            printf("Помилка: розміри матриць повинні бути однаковими для віднімання!\n");
            freematr(matrix,row);
            return 1;
        }

        printf("Введіть саму матрицю номер 2:\n");
        matrix2=allocmatrix(row2,col2);
        input_matrix(matrix2,row2,col2);

        result =minus_matrixes(matrix, matrix2, row, col);
        print_matrix(result, row, col);

        freematr(matrix, row);
        freematr(matrix2, row2);
        freematr(result, row);
        break;
        
    case 5:
        printf("Введіть кількість рядків та стовпчиків матриці номер 1 (через пробіл):\n");
        i_input(&row);
        i_input(&col);
        printf("Введіть саму матрицю номер 1:\n");
        matrix=allocmatrix(row,col);
        input_matrix(matrix,row,col);

        printf("Введіть кількість рядків та стовпчиків матриці номер 2 (через пробіл):\n");
        i_input(&row2);
        i_input(&col2);
        if (col!=row2) {
            printf("Помилка: кількість стовпчиків першої матриці має дорівнювати кількості рядків другої!\n");
            freematr(matrix,row);
            return 1;
        }

        printf("Введіть саму матрицю номер 2:\n");
        matrix2=allocmatrix(row2,col2);
        input_matrix(matrix2,row2,col2);

        result =mult_by_matrix(matrix,row,col ,matrix2,row2,col2);
        print_matrix(result, row,col2);

        freematr(matrix,row);
        freematr(matrix2,row2);
        freematr(result,row);
        break;
    
    default:
        printf("Такої функції не існує!");
        break;
    }
}