#include <stdio.h>

int main() {
    int n;
    printf("Введіть число від 7 до 12: ");
    scanf("%d", &n);
    if(n > 12 || n < 7){
        printf("Введіть коректне число");
        return 1;   
    }
    double array[n];

    double min;
    double max;
    double sum;

    
    for (int i = 0; i < n; i++){
        printf("Введіть число: ");
        scanf("%lf", &array[i]);
        if (i == 0) {
            min = array[i];
            max = array[i];
        } else {
            if (array[i] < min)
                min = array[i];
            if (array[i] > max)
                max = array[i];
        }
        sum += array[i];
    } 
    double avg = sum / n;
    
    printf("Min: %lf, Max: %lf, Sum: %lf, Avg: %lf\n", min, max, sum, avg);

    return 0;

    
}
