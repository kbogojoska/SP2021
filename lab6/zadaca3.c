//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100], i, n;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=n-1; i>=0; i--)
    {
        if((n-1)%2==0)
        {
            if(i%2==0)
            {
                printf("%d ", a[i]);
            }
        }
        if((n-1)%2==1)
        {
            if(i%2==1)
            {
                printf("%d ", a[i]);
            }
        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        if((n-1)%2==0)
        {
            if(i%2==0)
            {
                printf("%d ", a[i]);
            }
        }
        if((n-1)%2==1)
        {
            if(i%2==1)
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}
