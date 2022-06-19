//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>

int main()
{
    int a[100], i, k, b='A', z;
    char c;

    scanf("%c %d", &c, &k);

    for(i=0; i<26; i++)
    {
        a[i]=b;
        ++b;
    }

    for(i=0; i<26; i++)
    {
        if(a[i]==c)
        {
            printf("%c", a[(i+k)%26]);
        }
    }
    return 0;
}