//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, x, digit, temp, digit2, temp2, flag;
    scanf("%d %d", &n, &x);

    for(int i=n-1; i>=0; i--)
    {
        flag=1;
        temp=x;
        while(temp)
        {
            temp2=i;
            digit=temp%10;
            while(temp2)
            {
                digit2=temp2%10;
                if(digit==digit2)
                {
                    flag=0;
                }
                temp2/=10;
            }

            temp/=10;
        }
        if(flag==1)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}