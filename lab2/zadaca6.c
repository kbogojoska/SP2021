//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int number, num, digit, counter=1;

    scanf("%d", &number);

    num=number;

    for(int i=1; i<=5; i++)
    {
        digit=num%10;
        num=num/10;
        counter++;
    }

    printf("%d ", number%10+number/10000);
    printf("%d ", number%100/10+(number/1000)%10);
    printf("%d ", number%1000/100);

    return 0;
}
