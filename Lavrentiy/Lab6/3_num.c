#include <stdio.h>

void main(){

    int amount = 0;
    printf("Amount of numbers: ");
    scanf("%d", &amount);
    if (amount < 1){
        printf("Incorrect number");
        scanf("");
        return;
    }
    float numbers[100];
    for (int i = 0; i < amount; i++){
        int n = i+1;
        printf("Enter number (%d/%d):", n, amount);
        scanf("%f", &numbers[i]);
    }

    printf("Numbers:");
    float sum = 0;
    float average = 0;
    float min = numbers[0];
    float max = numbers[0];
    for (int i = 0; i < amount; i++){
        printf(" %f", numbers[i]);
        sum += numbers[i];
        if (numbers[i] < min){
            min = numbers[i];
        }
        if (numbers[i] > max ){
            max = numbers[i];
        }
    }
    average = sum/amount;

    printf("\nSum: %f", sum);
    printf("\nAverage: %f", average);
    printf("\nMin: %f", min);
    printf("\nMax: %f", max);

}