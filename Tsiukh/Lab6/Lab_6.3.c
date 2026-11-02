#include <stdio.h>
#include <windows.h>

int main() {

	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int N;
	
	do {
		printf("Введіть дійсне число N від 7 до 12 включно: ");
		scanf_s("%d", &N);
		if (N < 7 || N > 12) {
			printf("Неправильне число, має бути від 7 до 12 \n");
		}
		
	} while (N < 7 || N > 12);

	double num;
	double sum = 0.0;
	double min_val, max_val;

	printf("\nВведіть %d дійсних чисел:\n", N);

	for (int i = 0; i < N; i++) {
		printf("Число %d: ", i + 1);
		scanf_s("%lf", &num);

		sum += num;

		if (i == 0) {
			min_val = num;
			max_val = num;
		}
		else {
			if (num < min_val) {
				min_val = num;
			}
			if (num > max_val) {
				max_val = num;
			}
		}
	}


	double average = sum / N;


	printf("Сума: %.2lf\n", sum);
	printf("Середнє арифметичне: %.2lf\n", average);
	printf("Мінімальне значення: %.2lf\n", min_val);
	printf("Максимальне значення: %.2lf\n", max_val);

	return 0;


}