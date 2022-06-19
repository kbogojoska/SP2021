//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if(number%3==0&&number%5!=0)
    {
        printf("Tik");
    }
    if(number%3!=0&&number%5==0)
    {
        printf("Tak");
    }
    if(number%3==0&&number%5==0)
    {
        printf("Tik - Tak");
    }
    if(number%3!=0&&number%5!=0)
    {
        printf("Losh Broj");
    }

    return 0;
}
