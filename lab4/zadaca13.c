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
        for(int i=n;i>=1;i--)
        {
            for(int j=i+1;j>1;j--)
            {
                if(i!=n&&i!=2&&i!=1)
                {
                    if(j==i+1||j==2)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    printf("*");
                }

            }
            printf("\n");
        }
    }

    return 0;
}