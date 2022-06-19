//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n==0)
    {
        printf("Nevaliden vlez");
    }
    if(n>2)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i+1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}