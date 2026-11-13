#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <windows.h>
int recursive_sum(int current, int target) { 
	if (current > target) { 
		return 0; 
	} 
	return current + recursive_sum(current + 1, target);  
}
int main(void) { 
	SetConsoleCP(65001); 
	SetConsoleOutputCP(65001);
	int n_journal = 5;      
	int target_limit = 100; 

	int total_sum = recursive_sum(n_journal, target_limit);

	printf("Сума чисел від %d до %d дорівнює: %d\n", n_journal, target_limit, total_sum);

	return 0;
}