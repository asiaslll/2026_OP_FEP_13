#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char sent[200];
    int golosni = 0;
    int prygolosni = 0;              

    printf("Введіть речення: ");

    fgets(sent, sizeof(sent), stdin);
   
    int len = strlen(sent);

    for (int i = 0; i < len-1; ++i)
    {
        char c = sent[i];

        switch (c)
        {
            case 'а':
            case 'е':
            case 'є':
            case 'и':
            case 'і':
            case 'ї':
            case 'о':
            case 'у':
            case 'ю':
            case 'я':
                ++golosni;
                break;
        
            case 'ц':
            case 'к':
            case 'н':
            case 'г':
            case 'ш':
            case 'щ':
            case 'з':
            case 'х':
            case 'ф':
            case 'в':
            case 'п':
            case 'р':
            case 'л':
            case 'д':
            case 'ж':
            case 'ч':
            case 'с':
            case 'м':
            case 'т':
            case 'ь':
            case 'б':
                ++prygolosni;
                break;
        }
        
    }
    printf("Кількість голосних: %d\n", golosni);
    printf("Кількість приголосних: %d\n", prygolosni);
    return 0;

}
