//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    char c1, c2, c3;

    scanf("%c%c%c", &c1, &c2, &c3);

    if(c1>='!' && c1<='/' || c1>=':' && c1<='@' || c1>='[' && c1<='`' || c1>='{' && c1<='~')
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    if(c2>='!' && c2<='/' || c2>=':' && c2<='@' || c2>='[' && c2<='`' || c2>='{' && c2<='~')
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    if(c3>='!' && c3<='/' || c3>=':' && c3<='@' || c3>='[' && c3<='`' || c3>='{' && c3<='~')
    {
        printf("0");
    }
    else
    {
        printf("1");
    }

    printf("\n");

    if(c1>='A' && c1<='Z' || c1>='a' && c1<='z')
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    if(c2>='A' && c2<='Z' || c2>='a' && c2<='z')
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    if(c3>='A' && c3<='Z' || c3>='a' && c3<='z')
    {
        printf("0");
    }
    else
    {
        printf("1");
    }

    return 0;
}
