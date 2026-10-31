#include <stdio.h>

void main(){

    int sum = 0;
    int excludeNumber = 0;
    printf("Enter exclude number: ");
    scanf("%d", &excludeNumber); 
    int i = 1;
    while (i <= 100)
    {
        if (i == excludeNumber || i == 33){
            i++;
            continue;
        } 
        sum += i;
        i++;
    }

    printf("\nSum of 100 (excluding 33 and %d) = %d\n", excludeNumber, sum);
}