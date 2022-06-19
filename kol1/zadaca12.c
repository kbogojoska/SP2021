//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int n, counter, digit, max, c0, c1, c2, c3, c4,r;
    c0=c1=c2=c3=c4=0;

    while(scanf("%d", &n))
    {
        if(n>=100000)
        {
            return 0;
        }

        counter=0;
        max=0;
        r=0;
        while(n)
        {
            digit=n%10;
            if(max<digit)
            {
                max=digit;
                r=counter;
            }
            ++counter;
            n/=10;
        }
        switch(r)
        {
            case 0: c0++; break;
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            default: c4++;
        }
    }
    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d", c0, c1, c2 ,c3 ,c4);
}