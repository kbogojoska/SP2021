//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    char c='.';
    int newnumber=0, sum=0;

    while(c!='!')
    {
        scanf("%c", &c);

        if(c>='0'&&c<='9')
        {
            int digit=c-'0';
            newnumber=newnumber*10+digit;
        }
        else
        {
            sum+=newnumber;
            newnumber=0;
        }
    }
    printf("%d", sum);
    return 0;
}