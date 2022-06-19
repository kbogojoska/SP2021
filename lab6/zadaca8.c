//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            a[i]+=1;
        }
        else
        {
            a[i]-=1;
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}