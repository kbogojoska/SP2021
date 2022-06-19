//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, temp, counter, digit, reverse;
    scanf("%d", &n);
    if(n<=9)
    {
        printf("Brojot ne e validen");
        return 0;
    }

    for(int i=n-1;i>=0;i--)
    {
        reverse=0;
        counter=0;
        temp=i;
        while(temp)
        {
            digit=temp%10;
            counter++;
            reverse=reverse*10+digit;
            temp/=10;
        }

        if(reverse%counter==0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}