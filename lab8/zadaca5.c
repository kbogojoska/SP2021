//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int descending(int n)
{
    if(n<10)
    {
        return 1;
    }
    if((n%10)<=(n/10%10))
    {
        return 0;
    }
    else
    {
        return descending(n/10);
    }
}

int main()
{
    int i, n, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(descending(a[i]))
        {
            printf("DA\n");
        }
        else
        {
            printf("NE\n");
        }

    }

    return 0;
}