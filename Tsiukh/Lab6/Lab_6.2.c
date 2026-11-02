#include <windows.h>
#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int my_number;
	int i = 0;
	int sum = 0;

	printf("Введіть ваш номер у журналі: ");
	scanf_s("%d", &my_number);

	while (i <= 100) {
		if (i == 33 || i == my_number) {
			i++;
			continue;
		}

		sum += i;
		i++;

	}

	if (my_number == 33) {
		sum -= 33;
	}

	printf("Сума перших 100 чисел без 33 та номеру в журналі: %d", sum);

	return 0;
}