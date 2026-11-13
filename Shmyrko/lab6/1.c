#include <stdio.h>
#include <math.h>
#include <ctype.h>
typedef unsigned int ui;
ui a,b,mask,n=0,m=0;
ui tmp = (1<<(127-'a'))|(1<<(127-'i'))|(1<<(127-'o'))|(1<<(127-'e'))|(1<<(127-'u'));
char s[100],x;
int main() {
    printf("enter your sentence:\n");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++){
        x=tolower(s[i]);
        if(x<'a'||x>'z')continue;
        if(tmp & (1<<(127-x))){
            n++;
        }
        else m++;
    }
    printf("Vowel:%d",n);
    printf("\nConstant:%d",m);
    return 0;
}