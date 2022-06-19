//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    float money_in_account, price, price_and_ddv;

    scanf("%f", &money_in_account);
    scanf("%f", &price);

    price_and_ddv=price*1.18;

    if((money_in_account-price_and_ddv)>0)
    {
        printf("1");
    }

    else if((money_in_account-price_and_ddv)<=0)
    {
        printf("0");
    }

    return 0;
}
