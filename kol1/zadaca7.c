//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    if(m<=2)
    {
        return 0;
    }

    for(int i=1; i<=m; i++)
    {
        if(i==1 || i==m)
        {
            for(int j=1; j<=m; j++)
            {
                if(j==1 || j==m)
                {
                    printf("%%");
                }
                else
                {
                    printf("@");
                }
            }
        }
        else
        {
            for(int z=1; z<=m; z++)
            {
                if(z==1 || z==m)
                {
                    printf("%%");
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
    return 0;
}