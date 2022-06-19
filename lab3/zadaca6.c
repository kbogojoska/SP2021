//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, temp, digit, reverse=0, counter=0;
    scanf("%d", &n);

    temp=n;
    while (temp)
    {
        digit=temp%10;
        counter++;
        reverse=reverse*10+digit;
        temp/=10;
    }
    if(counter!=5)
    {
        printf("Nevaliden vlez");
    }
    else
    {
        if(reverse==n)
        {
            printf("Palindrom");
        }

        else
        {
            printf("Ne e palindrom");
        }
    }

    return 0;
}
