//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], m, n, i, j, c=0;

    scanf("%d %d", &m, &n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            b[i][j]=a[i][j];
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c=0;
            if(a[i][j]==0)
            {
                if(a[i-1][j-1]==1)
                {
                    ++c;
                }
                if(a[i-1][j]==1)
                {
                    ++c;
                }
                if(a[i-1][j+1]==1)
                {
                    ++c;
                }
                if(a[i][j-1]==1)
                {
                    ++c;
                }
                if(a[i][j+1]==1)
                {
                    ++c;
                }
                if(a[i+1][j-1]==1)
                {
                    ++c;
                }
                if(a[i+1][j]==1)
                {
                    ++c;
                }
                if(a[i+1][j+1]==1)
                {
                    ++c;
                }
                b[i][j]=c;
            }
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==1)
            {
                b[i][j]='*';
            }
        }
    }

    //printf("\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i][j]!='*')
            {
                printf("%d ", b[i][j]);
            }
            else
            {
                printf("%c ", b[i][j]);
            }

        }
        printf("\n");
    }
    return 0;

}