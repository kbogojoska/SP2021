//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

void printArray(int m)
{
    printf("%d ", m);
}

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
        printArray(a[i]);
    }

    printf("\n");
    for(i=n-1; i>=0; i--)
    {
        printArray(a[i]);
    }
    printf("\n");
    for(i=n-1; i>=0; i--)
    {
        if((n-1)%2==0)
        {
            if(i%2==0)
            {
                printArray(a[i]);
            }
        }
        if((n-1)%2==1)
        {
            if(i%2==1)
            {
                printArray(a[i]);
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
                printArray(a[i]);
            }
        }
        if((n-1)%2==1)
        {
            if(i%2==1)
            {
                printArray(a[i]);
            }
        }
    }

    return 0;
}