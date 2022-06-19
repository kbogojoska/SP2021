//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int digitsBiggerThanK(int n, int z)
{
    if(n<10)
    {
        if(n>z)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    if((n%10)>z)
    {
        return (n%10)+digitsBiggerThanK(n/10, z)*10;
    }
    else
    {
        return digitsBiggerThanK(n/10, z);
    }

}

int sumOfDigitsBiggerThanK(int n, int z)
{
    if(n<10)
    {
        if(n>z)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    if((n%10)>z)
    {
        return n%10+sumOfDigitsBiggerThanK(n/10, z);
    }
    else
    {
        return sumOfDigitsBiggerThanK(n/10, z);
    }
}

int main()
{
    int k, i, n, a[100];
    scanf("%d", &k);
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d : %d\n", digitsBiggerThanK(a[i], k), sumOfDigitsBiggerThanK(a[i], k));
    }

    return 0;
}