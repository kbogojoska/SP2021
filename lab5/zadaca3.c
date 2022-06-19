//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, i, counter=0, digit, newnumber=0, joker=0;

    for(i=0;i<=10000;i++)
    {
        scanf("%d", &n);
        if(n<1||n>90)
        {
            break;
        }

        ++counter;

        digit=n%10;

        if(counter<=7)
        {
            newnumber=newnumber*10+digit;
        }
        if(counter>7)
        {
            newnumber+=n;
        }

    }
    printf("%d", newnumber);

    return 0;
}

