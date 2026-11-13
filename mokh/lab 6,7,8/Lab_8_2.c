#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void random(int b[], int length)
{
	for (int i = 0; i < length; i++)
	{
		b[i] = rand() % 100;
	}
}

int* get_element_ptr_1(int b[], int length, int index)
{
	if (index < 0 || index >= length)
		return NULL;

	return &b[index];
}

int* get_element_ptr_2(int arr[12][12], int row, int col)
{
	if (row < 0 || row >= 12 || col < 0 || col >= 12)
		return NULL;

	return &arr[row][col];
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	//пункт а
	int a[10];
	int length = sizeof(a) / sizeof(a[0]);

	random(a, length);

	for (int i = 0; i < length; ++i)
		printf("%d ", a[i]);
	printf("\n");

	int index_1 = 9;
	int* ptr_1 = get_element_ptr_1(a, length, index_1);

	if (ptr_1 != NULL)
	{
		printf("Адреса елемента з індексом %d в пам'яті: %p\n", index_1, (void*)ptr_1);
		printf("Значення за цією адресою (розіменування *ptr): %d\n", *ptr_1);
	}
	else
	{
		printf("Помилка: невірний індекс!\n");
	}

	//пункт б
	int b[12][12];

	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 12; j++)
			b[i][j] = rand() % 100;

	int my_row = 8;
	int my_col = 10;

	int* ptr_2 = get_element_ptr_2(b, my_row, my_col);

	if (ptr_2 != NULL)
	{
		printf("Елемент [%d][%d] знайдено!\n", my_row, my_col);
		printf("Адреса в пам'яті: %p\n", (void*)ptr_2);
		printf("Значення за цією адресою: %d\n", *ptr_2);
	}
	else
		printf("Помилка: невірні індекси двовимірного масиву!\n");

	return 0;
}
