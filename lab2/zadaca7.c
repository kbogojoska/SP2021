//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int account_money, transaction, sum=0;

    scanf("%d", &account_money);

    for(int i=0; i<5; i++)
    {
        scanf("%d", &transaction);
        sum+=transaction;
    }

    if((account_money+sum)>0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
