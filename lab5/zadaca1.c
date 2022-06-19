//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d, a, b, c, N, i, F, S, min, flag=1;
    scanf("%d", &N);

    for(i=0;i<N;i++)
    {

        scanf("%d %d %d", &a, &b, &c);
        F=a-b;
        S=b-c;

        d = abs(F) + abs(S);

        if(flag==1)
        {
            min=d;
            flag=0;
        }

        if(d<min)
        {
            min=d;
        }
    }

    printf("%d", min);

    return 0;
}
