//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100][100], n, i, j, glavna=0, sporedna=0, prva=0, posledna=0;

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
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                glavna+=a[i][j];
            }
            if((i+j)==n-1)
            {
                sporedna+=a[i][j];
            }
            if(j==0)
            {
                prva+=a[i][j];
            }
            if(j==(n-1))
            {
                posledna+=a[i][j];
            }
        }
    }

    printf("%d\n", glavna-sporedna);
    printf("%d", prva-posledna);

    return 0;
}