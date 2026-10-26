#include <stdio.h>

void main(){
    int a, b;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    printf((a > b) ? "a > b" : "a < b");

    float sideA, sideB, sideC;
    printf("\nEnter triangle sides");
    printf("\nSide A:");
    scanf("%d", &sideA);
    printf("Side B:");
    scanf("%d", &sideB);
    printf("Side C:");
    scanf("%d", &sideC);
    printf("\n");

    if (sideA <= 0 || sideB <= 0 || sideC <= 0 || sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) { 
        printf("Triangle doesn't exist\n");
    }
    else{
        if (sideA == sideB && sideB == sideC){
            printf("Triangle is equilateral\n");
        }
        else if (sideA == sideB || sideA == sideC || sideB == sideC){
            printf("Triangle is isosceles\n");
        } 
        else{ 
            printf("Triangle is scalene\n"); 
        }

        float copy;

        if (sideA < sideB)
        {
            copy = sideA;
            sideA = sideB;
            sideB = copy;
        }

        if (sideA < sideC)
        {
            copy = sideA;
            sideA = sideC;
            sideC = copy;
        }

        if (sideB < sideC)
        {
            copy = sideB;
            sideB = sideC;
            sideC = copy;
        }
        
        if (sideA * sideA == sideB * sideB + sideC * sideC) // a^2 = b^2 + c^2
        {
            printf("Right triangle\n");
        }
        else if (sideA * sideA < sideB * sideB + sideC * sideC)
        {
            printf("Acute triangle\n");
        }
        else
        {
            printf("Obtuse triangle\n");
        }
    }
}