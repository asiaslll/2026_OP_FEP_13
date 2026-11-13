#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int a[11];

void rnd(int b[]) {
    for (int i = 1; i <= 10; i++)
        b[i] = rand() % 100; 
}

int main() {
    srand(time(NULL));
    rnd(a);
    
    for (int i = 1; i <= 10; i++)
        printf("%d ", a[i]); 
}