//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100], d, n, i, j, k, temp;

    scanf("%d", &d);

    for(i=0; i<d; i++)
    {
        scanf("%d", &n);

        for(j=1; j<=n; j++)
        {
            scanf("%d", &a[j]);
        }

        scanf("%d", &k);
        for(j=k; j<=n; j+=k)
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        for(j=1; j<=n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}