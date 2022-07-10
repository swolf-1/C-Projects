#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>

int lineCounter(FILE *file);
int wordsCounter(FILE *file);
int charsCounter(FILE *file);

int main(){

    int ch,lines,chars,words;
    FILE *fp;
    fp = fopen("i5f9.dat","r");
    if(fp == NULL) Error("Can't open %s", "i5f9.dat");

    lines = lineCounter(fp);
    rewind(fp);
    chars =charsCounter(fp);
    rewind(fp);
    words = wordsCounter(fp);

    printf("Lines:%d\nWords:%d\nChars:%d",lines,words,chars);

    fclose(fp);
}

int lineCounter(FILE *file){
    int lines=0,ch;

    while(TRUE){
        ch=fgetc(file);
        if(ch == EOF) break;
        if(ch == '\n')
            lines++;
    }
return lines;

}

int wordsCounter(FILE *file){
    int words=0,ch,charsInRow=0;

    while(TRUE){
        ch = fgetc(file);
        if(ch == EOF) break;
        if(ch != ' ')
            charsInRow++;

        if(ch == ' ' || ch == '\0')
            if(charsInRow != 0)
            {
                words++;
                charsInRow=0;
            }
    }
    return words;
}

int charsCounter(FILE *file){
    int chars=0,ch;

    while(TRUE){
        ch = fgetc(file);
        if(ch == EOF) break;
        chars++;
    }

    return chars;
}

