//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int price, devided=0;

    scanf("%d", &price);

    printf ("%d*5000\n", devided=price/5000);
    price-=devided*5000;
    devided=0;
    printf ("%d*1000\n", devided=price/1000);
    price-=devided*1000;
    devided=0;
    printf ("%d*500\n", devided=price/500);
    price-=devided*500;
    devided=0;
    printf ("%d*100\n", devided=price/100);
    price-=devided*100;
    devided=0;
    printf ("%d*50\n", devided=price/50);
    price-=devided*50;
    devided=0;
    printf ("%d*10\n", devided=price/10);
    price-=devided*10;
    devided=0;
    printf ("%d*5\n", devided=price/5);
    price-=devided*5;
    devided=0;
    printf ("%d*2\n", devided=price/2);
    price-=devided*2;
    devided=0;
    printf ("%d*1\n", devided=price/1);

    return 0;
}