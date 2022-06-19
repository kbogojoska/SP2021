//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int x, y ,z;

    scanf("%d %d %d", &x, &y, &z);//1 2 3

    printf("%d ", ++x - --y + z++ + (x>z));
    printf("%d ", ++x - --y + z++ + x>4);

    return 0;
}

