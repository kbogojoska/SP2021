//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>

int main()
{
    int n, iznos;
    char tip_na_danok;
    float tax, totalTax=0;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        tax=0;
        scanf(" %d %c", &iznos, &tip_na_danok);

        if(tip_na_danok=='A')
        {
            tax=tax+iznos*0.18;
        }
        else if(tip_na_danok=='B')
        {
            tax=tax+iznos*0.05;
        }
        else if(tip_na_danok=='V')
        {
            tax=tax+iznos*0.00;
        }

        totalTax=totalTax+tax;
    }

    printf("Total tax return is: %.2f", totalTax*0.15);

    return 0;
}
