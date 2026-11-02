#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int x, y;
int main() {
	printf("Enter X: ");
	scanf("%d", &x);
	printf("Enter Y: ");
	scanf("%d", &y);
	x > y ? printf("X is greater than Y") : printf("Y is greater than X");
	return 0;
}

