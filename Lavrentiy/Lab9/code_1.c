#include <stdio.h>
#include <string.h>

void Reverse(char word[]){
    int length = strlen(word);
    for (int i = 0; i < length/2; i++){
        char copy = word[i];
        word[i] = word[(length-1) - i];
        word[length-1-i] = copy;
    }
}

void main(){
    char sentence[300];
    char words[100][100];
    int wordCount = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", &sentence);
    char* split = strtok(sentence, " ");

    for (int i = 0; split != NULL; i++){
    strcpy(words[i], split);
    split = strtok(NULL, " ");
    Reverse(words[i]);
    wordCount = i+1;
    }   
    for (int i = 0; i < wordCount; i++){
        printf("%s\n", words[i]);
    }
}