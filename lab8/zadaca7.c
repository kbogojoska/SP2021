//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int sumOfDigits(int number)
{
    if(number<10)
    {
        return number;
    }
    else
    {
        return number%10+sumOfDigits(number/10);
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for(i = 0; i < n; ++i){

        int current;
        scanf("%d", &current);
        sum += sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d", sum);
    return 0;
}