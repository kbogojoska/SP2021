//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, grade4, grade5;

    scanf("%d %d %d %d %d", &grade1, &grade2, &grade3, &grade4, &grade5);

    float avrg=(grade1+grade2+grade3+grade4+grade5)/5.0;

    printf("%.2f", avrg);

    return 0;
}

