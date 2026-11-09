#include <stdio.h>

int recursive(int current, int max) {
	if (current > max) return 0;
	return current + recursive(current + 1, max);
}


int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int my_number;

	printf("Введіть ваш номер в журналі: ");
	scanf_s("%d", &my_number);

	if (my_number > 100) {
		printf("Ваш номер має бути менший або рівний 100\n");
		return 1;
	}

	int sum = recursive(my_number, 100);
	printf("Сума чисел від %d до 100: %d", my_number, sum);

	return 0;
}