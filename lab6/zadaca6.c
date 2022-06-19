//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100][100], n, i, j, max=0, c;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        c=1;
        for(j=0; j<n-1; j++)
        {
            if(a[i][j]<a[i][j+1])
            {
                ++c;
            }
            if(max<c)
            {
                max=c;
            }
        }
    }

    printf("%d", max);

    return 0;
}