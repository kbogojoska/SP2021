//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100], d, n, i, j, k, ogledalni, f, b;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        ogledalni=0;
        b=1;
        scanf("%d", &d);
        for(j=0; j<d; j++)
        {
            scanf("%d", &a[j]);
        }
        for(j=0; j<d; j++)
        {//printf("%d %d\n", a[j], a[d-b]);
            if(a[j]==a[d-b])
            {
                ++ogledalni;
            }
            ++b;
        }
        printf("%.2f%%\n", ogledalni*100/(float)d);
    }

    return 0;
}