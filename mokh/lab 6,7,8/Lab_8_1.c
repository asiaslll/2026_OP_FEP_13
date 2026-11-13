#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int b[], int length)
{
	for (int i = 0; i < length; i++)
	{
		b[i] = rand() % 100;
	}
}

int main()
{
	srand(time(NULL));

	int a[10];
	int length = sizeof(a) / sizeof(a[0]);

	random(a, length);

	for (int i = 0; i < length; ++i)
		printf("%d ", a[i]);

	return 0;
}

