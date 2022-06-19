//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int km, C, K, P, V, B, D, M;
    int price1, price2;

    scanf("%d", &km);
    scanf("%d %d %d", &C, &K, &P);
    scanf("%d %d %d %d", &V, &B, &M, &D);

    price1=C+(km-K)*P;
    price2=B+km*D+km/V*M;

    printf("%d %d\n", price1, price2);

    if(price1<=price2)
    {
        printf("1");
    }

    else
    {
        printf("0");
    }

    return 0;
}

