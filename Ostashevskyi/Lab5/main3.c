#include <stdio.h>

int main(void)
{

    int num;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999)
    {
        printf("The number must be a three-digit number\n");
        return 0;
    }
    
    int h = num / 100;
    int t = (num / 10) % 10;
    int u = num % 10;
    
    printf(" %d in words: ", num);
    
    switch (h)
    {
        case 1: printf("one hundred "); break;
        case 2: printf("two hundred "); break;
        case 3: printf("three hundred "); break;
        case 4: printf("four hundred "); break;
        case 5: printf("five hundred "); break;
        case 6: printf("six hundred "); break;
        case 7: printf("seven hundred "); break;
        case 8: printf("eight hundred "); break;
        case 9: printf("nine hundred "); break;
    }
    
    if (t == 1)
    {
        switch (u)
        {
            case 0: printf("ten\n"); break;
            case 1: printf("eleven\n"); break;
            case 2: printf("twelve\n"); break;
            case 3: printf("thirteen\n"); break;
            case 4: printf("fourteen\n"); break;
            case 5: printf("fifteen\n"); break;
            case 6: printf("sixteen\n"); break;
            case 7: printf("seventeen\n"); break;
            case 8: printf("eighteen\n"); break;
            case 9: printf("nineteen\n"); break;
        }
    }
    else
    {
        switch (t)
        {
            case 2: printf("twenty "); break;
            case 3: printf("thirty "); break;
            case 4: printf("forty "); break;
            case 5: printf("fifty "); break;
            case 6: printf("sixty "); break;
            case 7: printf("seventy "); break;
            case 8: printf("eighty "); break;
            case 9: printf("ninety "); break;
        }
        switch (u)
        {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
            case 0: printf("\n"); break;
        }
    }
    
    return 0;
}
