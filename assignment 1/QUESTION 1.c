//Q1) WAP TO DETERMINE WHETHER THE GIVEN NUMBER IS DIVISIBLE BY 3,5,6,7,8
#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%3 == 0)
    {
        printf("%d is divisible by 3 \n",num);
        if(num%6 ==0)
        {
            printf("%d is divisible by 6 \n",num);
        }
    }
    if(num%5 ==0)
    {
        printf("%d is divisible by 5 \n",num);
    }
    if(num%7 ==0)
    {
        printf("%d is divisible by 7 \n",num);
    }
    if(num%8 ==0)
    {
        printf("%d is divisible by 8 \n",num);
    }
    if(num%3!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0)
    {
        printf("%d is not divisible by 3,5,6,7,8",num);
    }
}