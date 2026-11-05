#include <stdio.h>
#include <windows.h>

int main(void) {
    // кирилиця
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c, d, e;
    
const char* ones[] = {"", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять"};
const char* teens[] = {"", "десять", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять", "п'ятнадцять", "шістнадцять", "сімнадцять", "вісімнадцять", "дев'ятнадцять"};
const char* tens[] = {"двадцять", "тридцять", "сорок", "п'ятдесят", "шістдесят", "сімдесят", "вісімдесят", "дев'яносто"};
const char* hunds[] = {"сто", "двісті", "триста", "чотириста", "п'ятсот", "шістсот", "сімсот", "вісімсот", "дев'ятсот"};

printf("Введіть число від 100 до 999: ");
scanf ("%d", &a);

if (a < 100 || a > 999) {
printf("Число не задовольняє умові.");
return 0;
}

b = a / 100;
c = a % 100;
printf("%s ", hunds[b - 1]);

if (c >= 10 && c <= 19) {
printf("%s ", teens[c - 9]);
}
else {
d = c / 10;
e = c % 10;

switch (d) {
case 0:
switch (e) {
case 0: break;
default: printf ("%s ", ones[e]);
}
break;
default: printf ("%s ", tens[d - 2]);
if (e > 0) {
printf(" ");
printf ("%s ", ones[e]);
}
}

}
printf("\n");
return 0;
}