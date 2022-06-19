//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, max=0, sum=0, digit, temp, counter=0;

    while(scanf("%d", &n))
    {
        temp=n;
        sum=0;
        sum+=max;
        max=0;
        while(temp)
        {
            digit=temp%10;
            if(max<digit)
            {
                max=digit;
            }
            sum+=digit;
            temp/=10;
        }
        printf("%d: %d\n", n, sum);
    }
    return 0;
}