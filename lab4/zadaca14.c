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
            for(int j=i;j<n;j++)
            {
                printf(" ");

            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}