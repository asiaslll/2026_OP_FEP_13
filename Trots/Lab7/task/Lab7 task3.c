#include <stdio.h>

int sumRec (int a);

int main()
{
	int n;
	int sum = 0;

	printf("Введіть ваш порядковий номер:");

	if (scanf("%d", &n) != 1) {
		printf("\nВи ввели не число!");
		return 1;
	}

	if (n < 0) {
		printf("Ви ввели мінусове число!\n");
		return 1;
	}

	if (n > 100) {
		printf("Номер має бути не більше 100!\n");
		return 1;
	}

	sum = sumRec(n);
	printf("\nСума чисел від %d до 100 = %d\n", n, sum);

	return 0;
}

int sumRec(int a)
{
	if (a > 100)
		return 0;
	return a + sumRec(a + 1);
}