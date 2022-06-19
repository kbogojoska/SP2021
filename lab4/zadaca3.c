//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int a, b, sum, temp, digit, counter=0;
    scanf("%d %d", &a, &b);

    for(int i=a;i<=b;i++)
    {
        sum=0;
        temp=i;
        while(temp)
        {
            digit=temp%10;
            if(digit%2==0)
            {
                sum+=digit;
            }
            temp/=10;
        }
        if(sum>0&&sum%4==0)
        {
            counter++;
            printf("%d\n", i);
        }
    }

    printf("Vkupno: %d", counter);

    return 0;
}