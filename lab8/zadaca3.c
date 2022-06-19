//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int sumOfEvenPositionedDigits(int n)
{
    int s, b;
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n/10%10+sumOfEvenPositionedDigits(n/100);
    }
}
int main()
{
    int number;
    scanf("%d", &number);

    printf("%d", sumOfEvenPositionedDigits(number));
    return 0;
}
