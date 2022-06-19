//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int seconds, hours, minutes, sec;

    scanf("%d", &seconds);

    hours=seconds/3600;
    sec=seconds%3600;
    minutes=sec/60;
    sec=sec%60;

    printf("%d sekundi se %d casovi, %d minuti i %d sekundi", seconds, hours, minutes, sec);

    return 0;
}

