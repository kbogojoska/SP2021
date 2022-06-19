//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;
    scanf("%d %d %d", &a, &b, &c);

    if(pow(b,2)-(4*a*c)>0)
    {
        x2=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x1=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("Reshenija na ravenkata se: %.2f i %.2f", x1, x2);
    }

    if(pow(b,2)-(4*a*c)==0)
    {
        x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("Dvojno reshenie na ravenkata e: %.2f",x1);
    }

    if(pow(b,2)-(4*a*c)<0)
    {
        printf("Ravenkata nema realni reshenija");
    }

    return 0;
}