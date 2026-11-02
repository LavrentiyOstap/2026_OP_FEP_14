2#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double num_1, num_2;
    
    printf("Enter first number: ");
    scanf("%lf", &num_1);
    printf("Enter second number: ");
    scanf("%lf", &num_2);
    
    (num_1 > num_2) ? printf("First number more: %.1lf > %.1lf \n", num_1, num_2) :
    (num_1 < num_2) ? printf("Second number more: %.1lf < %.1lf \n", num_1, num_2) :
                      printf("The numbers are the same: %.1lf == %.1lf \n", num_1, num_2);
    
    
}
