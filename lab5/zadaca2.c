//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int num1, num2, flag=0, temp, digit, temp2, digit2;
    scanf("%d %d", &num1, &num2);
    temp=num1;
    while(temp)
    {
        flag=0;
        temp2=num2;
        digit=temp%10;
        while(temp2)
        {

            digit2=temp2%10;
            if(digit==digit2)
            {
                flag=1;
            }

            temp2/=10;
        }
        temp/=10;

        if(flag==0)
        {
            printf("NE");
            return 0;
        }
    }

    printf("DA");

    return 0;
}