//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

void elka(int number)
{
    int i, j, k, counter=1;
    int z=(number/2)+1;
    for(i=0; i<(number/2)+1; i++)
    {
        for(j=1; j<z; j++)
        {
            printf(" ");
        }
        for(k=0; k<counter; k++)
        {
            printf("*");
        }
        counter+=2;
        z--;
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    elka(n);

    return 0;
}