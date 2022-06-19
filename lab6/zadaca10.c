//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int n, i, j, k, c=0;

    scanf("%d", &n);

    int a[n], b[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    j=0;
    for(i=0; i<n; i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            ++j;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>=k)
        {
            b[j]=a[i];
            ++j;
        }
    }

    for(j=0; j<n; j++)
    {
        printf("%d ", b[j]);
    }

    return 0;
}