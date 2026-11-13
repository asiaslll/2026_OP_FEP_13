#include <stdio.h>
int main() {
    int i=1,a=0;
    while(i<=100){
        if(i!=33&&i!=20)a+=i;
        i++;
    }
    printf("результат : %d",a);
    return 0;
}