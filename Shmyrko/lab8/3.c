#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int a[21], max = -10e10, min = 10e10, sum = 0;

void rnd(int b[]) {
    for (int i = 1; i <= 20; i++) {
        b[i] = rand() % 100; 
        sum = sum + b[i];
        
        if (min > b[i])
            min = b[i];
            
        if (max < b[i])
            max = b[i];
    }
}

int main() {
    srand(time(NULL));
    rnd(a);
    
    for (int i = 1; i <= 20; i++)
        printf("%d ", a[i]); 
        
    printf("\nmin= %d,max= %d ,sum= %d", min, max, sum);
}