#include<stdio.h>

int main(void)
{
    int num,rem;
    printf("Enter a number: ");
    scanf("%i",&num);
    rem = num % 9;
    switch(rem)
    {
        case 0:
            printf("Remainder= %i",rem);
            break;
        case 1:
            printf("Remainder= %i",rem);
            break;
        case 2:
            printf("Remainder= %i",rem);
            break;
        case 3:
            printf("Remainder= %i",rem);
            break;
        case 4:
            printf("Remainder= %i",rem);
            break;
        case 5:
            printf("Remainder= %i",rem);
            break;
        case 6:
            printf("Remainder= %i",rem);
            break;
        case 7:
            printf("Remainder= %i",rem);
            break;
        case 8:
            printf("Remainder= %i",rem);
            break;
    }
}