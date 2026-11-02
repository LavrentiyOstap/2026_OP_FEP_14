#include <windows.h>
#include <stdio.h>
#include <ctype.h>

	
int main() {

	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	char sentence[256];
	int gol = 0, prgol = 0;
	
	printf("Введіть речення(англійською): ");
	fgets(sentence, sizeof(sentence), stdin);
	
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		char ch = tolower((unsigned char)sentence[i]);

		if (isalpha((unsigned char)ch)) {
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
				gol++;
			}
			else {
				prgol++;
			}

		}
	}

	printf("Кількість голосних: %d\n", gol);
	printf("Кількість приголосних: %d\n", prgol);


	return 0;
}