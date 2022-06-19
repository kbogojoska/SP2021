//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[1000], n, i, j=0, c1=0, c2=0, c3=0, k=0, l=0, g1[1000], g2[1000], g3[1000];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%10==0||a[i]%10==1||a[i]%10==2)
        {
            ++c1;
            g1[j]=a[i];
            ++j;
        }
        if(a[i]%10==3||a[i]%10==4||a[i]%10==5)
        {
            ++c2;
            g2[k]=a[i];
            ++k;
        }
        if(a[i]%10==6||a[i]%10==7||a[i]%10==8||a[i]%10==9)
        {
            ++c3;
            g3[l]=a[i];
            ++l;
        }
    }

    printf("Grupa 1\n");
    for(j=0; j<c1; j++)
    {
        printf("%d ", g1[j]);
    }
    printf("\nGrupa 2\n");
    for(k=0; k<c2; k++)
    {
        printf("%d ", g2[k]);
    }
    printf("\nGrupa 3\n");
    for(l=0; l<c3; l++)
    {
        printf("%d ", g3[l]);
    }
    return 0;
}