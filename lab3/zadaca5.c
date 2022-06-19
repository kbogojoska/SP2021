//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>
#include<math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, AB, BC, AC;
    scanf("%d %d\n", &x1, &y1);
    scanf("%d %d\n", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    BC=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    AC=sqrt(pow((x3-x1),2)+pow((y3-y1),2));

    AB=abs(AB);
    BC=abs(BC);
    AC=abs(AC);

    if(AB>BC && AB>AC)
    {
        printf("AB");
    }
    if(BC>AB && BC>AC)
    {
        printf("BC");
    }
    if(AC>BC && AC>AB)
    {
        printf("AC");
    }
    return 0;
}

