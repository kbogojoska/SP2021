//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int m, n, i, temp, digit, flag=0;
    scanf("%d %d", &m, &n);

    for(i=m;i<=n;i++)
    {
        temp=i;
        while(temp)
        {
            digit=temp%10;
            if(digit%2==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            temp=temp/10;
        }

        if(flag==1)
        {
            printf("%d", i);
            break;
        }

    }
    if(flag==0)
    {
        printf("NE");
    }

    return 0;
}