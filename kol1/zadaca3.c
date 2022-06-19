//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, sum, max=0, z;
    scanf("%d", &n);

    for(int i=n-1; i>=0; i--)
    {
        sum=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(max<sum)
        {
            max=sum;
            z=i;
        }
    }
    printf("%d", z);

    return 0;
}