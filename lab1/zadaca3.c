//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>
#include <math.h>

int main()
{
    double height, weight;

    scanf("%lf", &weight);
    scanf("%lf", &height);

    height=height/100;

    printf("%.2lf", (double)weight/(height*height));

    return 0;
}

