//
// Created by kbogojoska on 19.6.2022.
//

#include <stdio.h>
#include<ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    FILE *f = fopen("text.txt", "r");

    char curr;
    int counter1=0, counter2=0, counter3=0;
    while((curr=fgetc(f))!=EOF)
    {
        if(isalpha(curr))
        {
            counter3++;
        }
        if(islower(curr))
        {
            counter1++;
        }
        else if(isupper(curr))
        {
            counter2++;
        }
    }

    fclose(f);

    printf("%.4f\n", (float)counter2/counter3);
    printf("%.4f", (float)counter1/counter3);

    return 0;
}

