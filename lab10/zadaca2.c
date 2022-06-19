//
// Created by kbogojoska on 19.6.2022.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();

    FILE *f=fopen("input.txt", "r");
    int n;
    int a[100][100];
    fscanf(f, "%d", &n);

    int i, j, sum=0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            fscanf(f, "%d", &a[i][j]);
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    fclose(f);

    FILE *e=fopen("output.txt","w");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            {
                fprintf(e, "%03d", sum);
            }
            else
            {
                fprintf(e, "   ");
            }
            fprintf(e, " ");
        }
        fprintf(e, "\n");
    }
    fclose(e);

    printFile();
    return 0;
}
