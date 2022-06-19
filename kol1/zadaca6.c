//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int z, a, b, counter=0, counter2=0;
    float percent;
    scanf("%d", &z);

    while(scanf("%d %d", &a, &b))
    {
        if(a==0 && b==0)
        {
            break;
        }

        ++counter2;
        if(a+b==z)
        {
            ++counter;
        }


    }

    percent=(counter/(float)counter2)*100;

    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", counter, z);
    printf("Procentot na parovi so zbir %d e %.2f%%", z, percent);
    return 0;
}