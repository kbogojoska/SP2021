//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[1000], n, i=0, j=0, k=0, pol[1000], nepol[1000];
    int sumpol=0, sumnepol=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]<50)
        {
            sumnepol+=a[i];
            nepol[j]=a[i];
            ++j;
        }
        if(a[i]>=50)
        {
            sumpol+=a[i];
            pol[k]=a[i];
            ++k;
        }
    }

    printf("Sredna vrednost na padnati %.2f\n", sumnepol/(float)j);
    for(i=0; i<j; i++)
    {
        printf("%d ", nepol[i]);
    }
    printf("\nSredna vrednost na polozeni %.2f\n", sumpol/(float)k);
    for(i=0; i<k; i++)
    {
        printf("%d ", pol[i]);
    }
    return 0;
}