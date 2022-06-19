//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int dataMaticen, godina, den, mesec, temp, counter=0, username, digit;
    scanf("%d", &dataMaticen);

    godina=1000+dataMaticen%1000;
    den=dataMaticen/100000;
    mesec=dataMaticen/1000%100;

    username=den*100+mesec*1000+godina;

    temp=username;
    while(temp)
    {
        digit=temp%10;
        counter++;
        temp/=10;
    }
    if(counter==4)
    {

        if(godina<=1960)
        {
            username=username+70000;

        }
        else if(godina>=1961&&godina<=1980)
        {
            username=username+80000;

        }
        else if(godina>=1981&&godina<=1999)
        {
            username=username+90000;

        }
        printf("%d", username);


    }
    else
    {
        printf("%d", username);
    }


    return 0;
}

