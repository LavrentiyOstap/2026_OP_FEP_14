#include <stdio.h>
#include <Windows.h>
int x, y, z;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	
	printf("Введіть першу сторону ікс: ");
	scanf_s("%d", &x);
	printf("Введіть другу сторону ігрик: ");
	scanf_s("%d", &y);
	printf("Введіть третю сторону зет: ");
	scanf_s("%d", &z);
	
	if (x <= 0 || y <= 0 || z <= 0) {
		printf("Трикутник не існує");
		return 0;
	}	
	
	if (x == y || y == z || x == z) {
		printf("Трикутник рівнобедрений");
	}
	else if (x != y && y != z && x != z) {
		printf("Трикутник різносторонній");
	}
	else if (x == y == z) {
		printf("Трикутник рівносторонній");
	}
	if (z = x * x + y * y) {
		printf("\nТрикутник прямокутний");
	}
	else if (z < x * x + y * y) {
		printf("\nТрикутник гострокутний");
	}
	else if (z > x * x + y * y) {
		printf("\nТрикутник тупокутний");
		
		return 0;
	}
}