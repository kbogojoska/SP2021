//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    float cena=0;
    scanf("%d", &p);

    if (p>=500){
        cena+=2500;
        p-=500;
        if (p>=150){
            cena+=1125;
            p-=150;
            if (p>=200){
                cena+=2200;
                p-=200;
                if (p>=0){
                    cena+=p*13.5;
                    p=0;
                }
            } else {
                cena+=p*11;
                p=0;
            }
        } else {
            cena+=p*7.5;
            p=0;
        }
    } else {
        cena+=p*5;
        p = 0;
    }

    if (cena>7000){
        cena*=1.18;
    } else {
        cena*=1.10;
    }

    printf("%.2f", cena);
    return 0;
}

