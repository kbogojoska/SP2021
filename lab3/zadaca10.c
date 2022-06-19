//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int number,firstDigit, secondDigit, sumOfLastTwo;
    scanf("%d", &number);

    firstDigit=number/1000000;



    if(number%100!=0&&number/100000%10!=0)
    {
        sumOfLastTwo=number%10+number%100/10;
    }
    else
    {
        printf("Nevaliden broj");
        return 0;
    }

    if((number%firstDigit==0&&number%sumOfLastTwo!=0)||(number%secondDigit!=0&&number%sumOfLastTwo!=0))
    {
        printf("DA");
    }
    else
    {
        printf("NE");
    }
    return 0;
}