#include <stdio.h>
int sum(int num){
    if(num==100)return num;
    return num+sum(num+1);
    
}
int main() {
    printf("%d",sum(20));
    return 0;
}