#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h>

bool rezultat(int number)
{
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
			return true; // Число не є простим
	}
	return false; // Число є простим
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num;
	printf("Введіть число: ");
	scanf_s("%d", &num);

	if (num < 1 || num >= 10000)
		return 0;


	if (rezultat(num))
		printf("Число не є простим.");
	else
		printf("Число є простим.");

	return 0;
}
