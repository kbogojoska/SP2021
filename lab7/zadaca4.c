//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int obratenBroj(int broj)
{
    int newNumber=0, cifra=0;
    while(broj!=0)
    {
        cifra=broj%10;
        newNumber=cifra+newNumber*10;
        broj/=10;
    }
    return newNumber;
}

int sumaNaCifri(int broj)
{
    int sum=0, cifra;

    while(broj!=0)
    {
        cifra=broj%10;
        sum+=cifra;
        broj/=10;
    }
    return sum;
}

void pecatiVoInterval(int a, int b)
{
    int i, s;
    for(i=a; i<b; i++)
    {
        s=i+obratenBroj(i);
        if(s%sumaNaCifri(s)==0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int s, f;
    scanf("%d %d", &s, &f);
    pecatiVoInterval(s, f);

    return 0;
}