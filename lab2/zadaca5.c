//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, grade4, grade5, grade6, index;
    int year;

    scanf("%06d", &index);
    scanf("%d%d%d%d%d%d", &grade1, &grade2, &grade3, &grade4, &grade5, &grade6);

    float prosek=(grade1+grade2+grade3+grade4+grade5+grade6)/6.0;

    printf("Prosek: %.3f\n", prosek);
    printf("Student: %d\n", index);

    year=index/10000;

    if(year==19)
    {
        printf("1 godina\n");
    }
    else if(year==18)
    {
        printf("2 godina\n");
    }
    else if(year==17)
    {
        printf("3 godina\n");
    }
    else if(year==16)
    {
        printf("4 godina\n");
    }
    else if(year==15)
    {
        printf("5 godina\n");
    }
    else if(year==14)
    {
        printf("6 godina\n");
    }
    else if(year==13)
    {
        printf("7 godina\n");
    }
    else if(year==12)
    {
        printf("8 godina\n");
    }
    else if(year==11)
    {
        printf("9 godina\n");
    }else if(year==10)
    {
        printf("10 godina\n");
    }

    printf("Nagraden: ");
    if(prosek>=9.5)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;

}

