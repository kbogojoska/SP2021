//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int number, initial, secondThree, lastThree;

    scanf("%d", &number);

    initial=number/1000000;
    secondThree=number/1000%1000;
    lastThree=number%1000;

    printf("%03d/%03d-%03d ", initial, secondThree, lastThree);
    if(initial==70||initial==71||initial==72)
    {
        printf("T-mobile");
    }
    if(initial==75||initial==76||initial==77||initial==78)
    {
        printf("A1");
    }
    if(initial==79)
    {
        printf("LycaMobile");
    }
    return 0;

}