//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int number, sum=0;

    while(scanf("%x", &number))
    {
        sum+=number;
    }
    if(sum%16==0)
    {
        if(sum%100==16)
        {
            printf("Poln pogodok");
        }
        else
        {
            printf("Pogodok");
        }
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}