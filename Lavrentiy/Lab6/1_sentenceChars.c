#include <stdio.h>

void main(){
    char line[200];

    printf("Enter sentence: ");
    scanf("%199[^\n]", line);

    int vowels = 0;
    int consonants = 0;

    for (int i = 0; line[i] != '\0'; i++){
        char ch = line[i];

        if (ch >= 'a' && ch <= 'z'){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if (ch >= 'A' && ch <= 'Z'){
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }

    printf("Vowels: %d, consonants: %d", vowels, consonants);
    scanf("");
}