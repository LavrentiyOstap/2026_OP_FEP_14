#include <stdio.h>

int main(void) {

    double Side1_1, Side1_2, Side1_3;
    
    printf("Enter the lengths of first sides: ");
    scanf("%lf", &Side1_1);
    printf("Enter the lengths of second sides: ");
    scanf("%lf", &Side1_2);
    printf("Enter the lengths of third sides: ");
    scanf("%lf", &Side1_3);
    
    if (Side1_1 <= 0 || Side1_2 <= 0 || Side1_3 <= 0 || (Side1_1 + Side1_2 <= Side1_3) || (Side1_1 + Side1_3 <= Side1_2) || (Side1_2 + Side1_3 <= Side1_1))
    {
        printf("A triangle with such sides does not exist!\n");
        return 0;
    }
    
    printf("\nBy its sides, the triangle is: ");
    if (Side1_1 == Side1_2 && Side1_2 == Side1_3)
    {
        printf("Equilateral\n");
    }
    else if (Side1_1 == Side1_2 || Side1_1 == Side1_3 || Side1_2 == Side1_3)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }
    
    double Side2_1 = Side1_1 * Side1_1, Side2_2 = Side1_2 * Side1_2, Side2_3 = Side1_3 * Side1_3;
    
    printf("By its angles, the triangle is: ");
    if ((Side2_1 + Side2_2 == Side2_3) || (Side2_1 + Side2_3 == Side2_2) || (Side2_2 + Side2_3 == Side2_1))
    {
        printf("Right-angled\n");
    }
    else if ((Side2_1 + Side2_2 < Side2_3) || (Side2_1 + Side2_3 < Side2_2) || (Side2_2 + Side2_3 < Side2_1))
    {
        printf("Obtuse\n");
    }
    else
    {
        printf("Acute\n");
    }
    
    return 0;
}
