//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100][100], b[2][2]={0}, i, j, n;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n/2; i++)
    {
        for(j=0; j<n/2; j++)
        {
            b[0][0]+=a[i][j];
        }
    }

    for(i=0; i<n/2; i++)
    {
        for(j=n-1; j>n/2; j--)
        {
            b[0][1]+=a[i][j];
        }
    }

    for(i=n-1; i>n/2; i--)
    {
        for(j=0; j<n/2; j++)
        {
            b[1][0]+=a[i][j];
        }
    }

    for(i=n-1; i>n/2; i--)
    {
        for(j=n-1; j>n/2; j--)
        {
            b[1][1]+=a[i][j];
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}