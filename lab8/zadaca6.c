//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int gcd(int s, int b)
{
    if(b==0)
    {
        return s;
    }
    else
    {
        return gcd(b, s%b);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", gcd(n, m));

    return 0;
}