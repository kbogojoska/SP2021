//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main() {
    int number;

    while (scanf("%d", &number)) {
        if (number < 10) {
            continue;
        }

        int tmp = number;

        int posledna = tmp % 10;
        int pretposledna = tmp / 10 % 10;

        tmp /= 10;

        int cikCakPogolemo;
        if (pretposledna<posledna){
            cikCakPogolemo=1;
        } else if (pretposledna>posledna){
            cikCakPogolemo=0;
        } else {
            continue;
        }

        int vazhi = 1;
        while (tmp >= 10) {
            posledna = tmp % 10;
            pretposledna = tmp / 10 % 10;
            if (cikCakPogolemo) {
                if (pretposledna > posledna) {
                    cikCakPogolemo = 0;
                } else {
                    vazhi = 0;
                    break;
                }
            } else {
                if (pretposledna < posledna) {
                    cikCakPogolemo = 1;
                } else {
                    vazhi = 0;
                    break;
                }
            }
            tmp /= 10;
        }

        if (vazhi) {
            printf("%d\n", number);
        }

    }
    return 0;
}