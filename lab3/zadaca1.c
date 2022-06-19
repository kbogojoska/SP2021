//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int number, digit, num, reverse=0, counter=0, i, multiply=1, sum=0, flag=0;
    scanf("%d", &number);
    num=number;

    while(num)
    {
        digit=num%10;
        counter++;
        if(counter==1 && digit==0)
        {
            reverse=1;
            flag=1;
        }
        else{
            reverse=reverse*10+digit;}
        num/=10;
    }

    if(counter!=7)
    {
        printf("Vneseniot broj ne e 7 cifren!");
        return 0;
    }

    counter=0;
    while(reverse)
    {
        digit=reverse%10;
        counter++;
        if(flag==1 && counter==7)
        {
            digit=digit-1;
        }
        printf("%d\n", digit);
        reverse/=10;
        sum=sum+digit;
        multiply=multiply*digit;
    }

    printf("%d\n%d", sum, multiply);

    return 0;
}
