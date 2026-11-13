#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void find_min_max_sum(int arr[], int length)
{
	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < length; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	int sum = min + max;

	printf("Мінімальне значення: %d\n", min);
	printf("Максимальне значення: %d\n", max);
	printf("Сума значень: %d\n", sum);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	int a[20];
	int length = 20;

	for (int i = 0; i < length; i++)
	{
		a[i] = rand() % 100;
		printf("%d ", a[i]);
	}
	
	printf("\n");

	find_min_max_sum(a, length);

	return 0;
}
