#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
int number;
bool mrtest(int n){
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0||n%3==0)return false;
    //m
    int m = n-1,r=0;
    while(m%2 == 0){
        m/=2;
        r++;
    }
    //base
    //x=(a^m) mod n
    long long x=1,base=2;
    while (m>0) {      //x=r^m % n
    if (m%2==1) x = (x * base) % n;
    base = (base * base) % n;
    m /= 2;          
    }
    //mod=1 or mod=-1(d0)
    if(x==1||x==n-1)return true;
    //d(r-1)
    for(int i=0;i<r-1;i++){
        x=(x*x)%n;
        if(x==n-1)return true;
    }
    return false;


}
int main() {
    scanf("%d",&number);

    if(mrtest(number)){
        printf("Prime");
    }
    else printf("non prime");
    return 0;
}