#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int s1, s2, s3;

    printf("Введіть сторони трикутника: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3)
        printf("Рівносторонній трикутник\n");
    else if (s1 == s2 || s1 == s3 || s2 == s3)
        printf("Рівнобедрений трикутник\n");
    else
        printf("Різносторонній трикутник\n");

    if (s1*s1 + s2*s2 == s3*s3 ||
        s1*s1 + s3*s3== s2*s2 ||
        s2*s2 + s3*s3 == s1*s1)
        printf("Прямокутний трикутник\n");
    else if (s1*s1 + s2*s2 < s3*s3 ||
             s1*s1 + s3*s3 < s2*s2 ||
             s2*s2 + s3*s3 < s1*s1)
        printf("Тупокутний трикутник\n");
    else
        printf("Гострокутний трикутник\n");

    return 0;
}